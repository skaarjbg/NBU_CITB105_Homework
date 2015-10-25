/** EXERCISE 4
 * Output: Enter a number:
 * Input: 5
 * Output: 5^2 = 25, 5^3 = 125, 5^4 = 625, 5^5 = 3125
 */

#include <iostream>
#include <cmath>

using namespace std;

void get_user_input(long *);

int main() {
    long number;

    get_user_input(&number);

    //corner case logic when user input == 1
    if(number == 1) {
        cout << number << "^" << number << " = " <<  number << endl;
        return 0;
    }

    for(int i = 2; i <= number; i++) {
        cout << number << "^" << i << " = " << pow(number, i);

        //skip trailing comma after the last result
        if(i != number) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}

void get_user_input(long* number) {

    cout << "Enter a number:";
    cin >> *number;

    //Ask for input again when user input is invalid
    if(cin.fail()) {
        cout << "Not a number!" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        get_user_input(number);
    }
}