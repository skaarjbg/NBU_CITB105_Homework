/** EXERCISE 7
 * Output: Enter price of something(lv):
 * Input: 3.45
 * Output: Enter amount(lv):
 * Input: 5
 * Output: Your change is 1.55lv (155st)
 */

#include <iostream>
#include <cmath>

using namespace std;

void get_user_input(string, float *);

int main() {
    float price;
    float amount;
    get_user_input("Enter price of something: ", &price);
    get_user_input("Enter amount: ", &amount);
    float change = amount - price;

    //handle not enough money case
    if(change >= 0) {
        cout << "Your change is: " << change <<  "lv"
        << " (" << change * 100 << " st)" <<  endl;
    } else {
        cout << "You are short: " << abs(change) <<  "lv"
        << " (" << abs(change) * 100 << " st)" <<  endl;
    }
}

void get_user_input(string input_msg, float *number) {

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
