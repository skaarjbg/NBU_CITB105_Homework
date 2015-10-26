/** EXERCISE 6
 * Output: Enter a number in meters:
 * Input: 600
 * Output:
 * 600 m = 0.6 km
 * 600 m = 6000 dm
 * 600 m = 60000 cm
 */

#include <iostream>

#define M_TO_CM(x) x * 100
#define M_TO_DM(x) x * 10
#define M_TO_KM(x) (double) x / 1000

using namespace std;

void get_user_input(string, long *);

int main() {
    long a;
    get_user_input("Enter a number in meters: ", &a);
    cout << a << " m  = " << M_TO_KM(a) << " km" << endl;
    cout << a << " m  = " << M_TO_DM(a) << " dm" << endl;
    cout << a << " m  = " << M_TO_CM(a) << " cm" << endl;
}

void get_user_input(string input_msg, long *number) {

    cout << input_msg;
    cin >> *number;

    //Ask for input again when user input is invalid
    if (cin.fail()) {
        cerr << "Not a number!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        get_user_input(input_msg, number);
    }
}
