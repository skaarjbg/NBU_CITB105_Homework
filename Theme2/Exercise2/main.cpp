/**
 * HOMEWORK EXERCISE 2
 * Output: Enter number 1:
 * Input: 5
 * Output: Enter number 2:
 * Input: 7
 * Output: Enter number 3:
 * Input: 13
 * Output: The largest number is 13
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    double num;
    double largest = 0;
    int counter = 1;

    cout << "Enter numbers to find the largest among them.\n"
    << "Program stops and returns result on first non-numeric input"
    << endl;

    while(!cin.fail()) {
        cout << "Enter number " << counter << ":" << endl;
        cin >> num;
        counter++;
        if(num > largest) {
            largest = num;
        }
    }
    cout << "The largest number is " << largest << endl;
}
