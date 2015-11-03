/**
 * HOMEWORK EXERCISE 6
 */

#include <iostream>
#include <cmath>

#define ERROR -1
#define CHECK_TRIANGLE(a, b, c) ((a < b + c)) ? ((b < a + c)) ? ((c < a + b)) ? 1 : 0 : 0 : 0

using namespace std;

double area_heron(int, int, int);

int main(int argc, char *argv[]) {
    int a;
    int b;
    int c;

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);

    if (CHECK_TRIANGLE(a, b, c)) {
        cout << "Area of the triangle is: " << area_heron(a, b, c) << endl;
        return 0;
    } else {
        cerr << "The figure provided is not a triangle" << endl;
        return ERROR;
    }
}

double area_heron(int a, int b, int c) {
    int s = (a + b + c) / 2;
    return sqrt(s * ((s - a) * (s - b) * (s - c)));
}
