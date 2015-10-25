/** EXERCISE 9
 * Output: Enter a tank size:
 * Input: 50
 * Output: Enter fuel efficiency (km per liter):
 * Input: 10
 * Output: Enter price per liter:
 * Input: 2.45
 * Output:
 * We can travel 500km.
 * For every 100km it will cost 24.5lv.
 */

#include <iostream>
using namespace std;

void get_user_input(string, long *);
void get_user_input(string, double *);

int main() {
    long tank_size;
    get_user_input("Enter tank size: ", &tank_size);

    long fuel_efficiency;
    get_user_input("Enter fuel efficiency (km per liter): ", &fuel_efficiency);

    double price;
    get_user_input("Enter price per liter: ", &price);

    cout << "We can travel " << tank_size * fuel_efficiency << " km" << endl;
    cout << "For every 100 km it will cost " <<  price * 100 << " lv" << endl;
}

void get_user_input(string input_msg, long *number) {

    cout << input_msg;
    cin >> *number;

    //Ask for input again when user input is invalid
    if (cin.fail()) {
        cout << "Not a number!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        get_user_input(input_msg, number);
    }
}

void get_user_input(string input_msg, double *number) {

    cout << input_msg;
    cin >> *number;

    //Ask for input again when user input is invalid
    if (cin.fail()) {
        cout << "Not a number!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        get_user_input(input_msg, number);
    }
}
