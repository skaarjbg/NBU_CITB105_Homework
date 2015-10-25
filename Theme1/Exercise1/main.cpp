/**
 * HOMEWORK EXERCISE 1
 * Output: Enter your first name:
 * Input: Ivan
 * Output: Enter your last name:
 * Input: Petrov
 * Output: Hello Ivan Petrov!
 */

#include <iostream>

using namespace std;

void print_names(string, string);

int main() {
    string first_name;
    cout << "Enter your first name: " << endl;
    cin >> first_name;

    string last_name;
    cout << "Enter your last name: " << endl;
    cin >> last_name;

    print_names(first_name, last_name);

    return 0;
}

void print_names(string first_name, string last_name) {
    cout << "Hello " << first_name << " " << last_name << "!" << endl;
}

