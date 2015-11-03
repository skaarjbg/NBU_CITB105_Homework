/**
 * HOMEWORK EXERCISE 3
 */

#include <iostream>
#include <string.h>

#include "main.h"

#define ERROR 123

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "NO INPUT" << endl;
        return ERROR;
    }
    size_t length = 0;
    length = strlen(argv[1]);
    if (length < 2) {
        cerr << "TOO SHORT INPUT" << endl;
    }
    double result = 0;
    for (int i = 0; i < length; i++) {
        char c = argv[1][i];
        if(!strchr(letters, c) && !strchr(symbols, c)) {
            cerr << "Invalid character: " << c << endl;
            continue;
        }

        result = parse_input(argv[1][i]);
    }
    parse_input('0');
    cout << result << endl;
}

double parse_input(char c) {
    static double num = 0;
    static States state = NOT_STARTED;

    switch (state) {
        case FINISHED: {
            num = 0;
            state = RUNNING;
        }
            //intentional fallthrough
        case NOT_STARTED:
            //intentional fallthrough
        case RUNNING: {
            if (c == '0') {
                state = FINISHED;
                return num;
            }

            if (c == 'A') {
                state = GOT_A;
                num += 4;

            } else if (c == 'F') {
                state = GOT_F;
                num += 2;
            } else if (strchr(symbols, c)) {
                if (c == '+') {
                    num += 0.3;
                } else {
                    num -= 0.3;
                }
            } else {
                num = get_value_from_enum(c);
            }
        }
            break;
        case GOT_A: {
            if (c == '0') {
                state = FINISHED;
                return num;
            }
            if (strchr(symbols, c)) {
                if (c != '+') {
                    num -= 0.3;
                }
                state = RUNNING;
            } else {
                num += get_value_from_enum(c);
            }
        }
            break;
        case GOT_F: {
            if (c == '0') {
                state = FINISHED;
                return num;
            }
            if (strchr(symbols, c)) {
                if (c == '+') {
                    num += 0.3;

                } else {
                    num = 0;
                }
                state = RUNNING;
            } else {
                num += get_value_from_enum(c);
            }
        }
    }
    return num;
}

int get_value_from_enum(char c) {

    switch (c) {
        case 'B': {
            return Letter_values::B;
        }
        case 'C': {
            return Letter_values::C;
        }
        case 'D': {
            return Letter_values::D;
        }
        default:
            break;
    }
}