/** HOMEWORK EXERCISE 2
 *  Write the following program:
 *  Output: Enter your name:
 *  Input: Ivan
 *  Output:
 *  ===============
 *  =     Ivan    =
 *  ===============
 */

#include <iostream>

using namespace std;

int main() {

    cout << "Enter your name" << endl;
    string name;
    getline(cin, name);
    unsigned long box_length = name.length() * 3;
    string boxline = string(box_length, '=');

    //calculate  whitespace needed for centering the word
    unsigned long whitespace_count = box_length - name.length() - 2;

    //if whitespace is odd, then the box would be uneven, add 1 to total length to even it out
    if (whitespace_count % 2 != 0) {
        whitespace_count++;
        boxline.insert(0, 1, '=');
    }
    string whitespace = string(whitespace_count / 2, ' ');
    cout << boxline << "\n=" << whitespace << name << whitespace << "=\n" << boxline << endl;

    return 0;
}