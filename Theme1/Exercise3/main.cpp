/**
 * Output: Enter your firstname:
 * Input: Ivan
 * Output: Enter your lastname:
 * Input: Petrov
 * Output: Enter your address:
 * Input: Sofia, zhk. Liulin, N 629 ent. D ap 995
 * Output:
 * ================
 * > Ivan
 * > Petrov
 * > Sofia, zhk. Liulin, N 629 ent. D ap 995
 * ================
 */

#import <iostream>

#define LINE_BEGIN "\n> "

using namespace std;

int main() {
    string first_name;
    string last_name;
    string address;

    cout << "Enter your firstname:";
    getline(cin, first_name);
    cout << "Enter your lastname:";
    getline(cin, last_name);
    cout << "Enter yor address:";
    getline(cin, address);

    cout << string(15, '=')
    << LINE_BEGIN << first_name
    << LINE_BEGIN << last_name
    << LINE_BEGIN << address
    << '\n' << string(15, '=');

}
