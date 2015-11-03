/**
 * HOMEWORK EXERCISE 5
 */

#include <iostream>
#include "main.h"

#define ERROR -1

using namespace std;

int main(int argc, char *argv[]) {
    double angle;
    char c;

    angle = atof(argv[1]);
    c = argv[2][0];

    switch(c) {
        case 'r' : {
            if(angle < 0 || angle > (2 * M_PI)) {
                cerr << "Angle too big or too low, must be 0 <= angle <= 2 * PI (roughly 6.2831853)" << endl;
                return ERROR;
            }
            cout << angle << " converted to degrees is: " << rad_to_deg(angle) << endl;
            return 0;
        }
        case 'd' : {
            if(angle < 0 || angle > 360) {
                cerr << "Angle too big or too low, must be 0 <= angle <= 360" << endl;
                return ERROR;
            }
            cout << angle << " converted to radians is: " << deg_to_rad(angle) << endl;
            return 0;
        }
        default: {
            cerr << "Invalid specifier for conversion supplied: " << c << endl;
            return ERROR;
        }
    }
}

