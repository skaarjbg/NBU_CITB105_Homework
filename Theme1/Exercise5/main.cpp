/** EXERCISE 5
 * Output: Enter a:
 * Input: 5
 * Output: Enter b:
 * Input: 6
 * Output:
 * a + b = 11
 * a - b = -1
 * a * b = 30
 * a / b = 0,833333...
 */

#include <iostream>

using namespace std;

void get_user_input(string, long *);

int main() {
    long a;
    long b;
    get_user_input("Enter a: ", &a);
    get_user_input("Enter b: ", &b);

    cout << "a + b = " << a + b << '\n'
    << "a - b = " << a - b << '\n'
    << "a * b = " << a * b << '\n';

    //handle b == 0 case
    if (b > 0) {
        cout << "a / b = " << (double) a / b << endl;
    } else {
        cout << "a / b = DIVISION BY ZERO" << endl;
    }
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
