/** EXERCISE 8
 * Output: Enter drive letter:
 * Input: C
 * Output: Enter path:
 * Input: Windows
 * Output: Enter file name:
 * Input: kernel.dll
 * Output: C:\Windows\kernel.dll
 */

#include <iostream>
using namespace std;
void ex8_impl();

int main() {
    ex8_impl();
}

void ex8_impl() {
#ifdef __linux
    string mount_point;
    cout << "Enter mount point: " << endl;
    cin >> mount_point;

    string path;
    cout << "Enter path: " << endl;
    cin >> path;

    string file_name;
    cout << "Enter file name: " << endl;
    cin >> file_name;

    cout << "/" << mount_point << "/" << path << "/" << file_name << endl;
#elif _WIN32
    string drive_letter;
    cout << "Enter Drive Letter:" << endl;
    cin >> drive_letter;

    string path;
    cout << "Enter path: " << endl;
    cin >> path;

    string file_name;
    cout << "Enter file name:";
    cin >> file_name;

    cout << drive_letter << ":\\" << path << "\\" << file_name << endl;
#endif
}

