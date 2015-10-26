//
// Created by skaarjbg on 10/25/15.
//

#ifndef NBU_CITB105_HOMEWORK_MAIN_H
#define NBU_CITB105_HOMEWORK_MAIN_H

static const char *symbols = "+-";
static const char *letters = "ABCDF";

int get_value_from_enum(char);
double parse_input(char);

enum States {
    GOT_A,
    GOT_F,
    FINISHED,
    RUNNING,
    NOT_STARTED,
};

enum Letter_values {
    A = 5,
    B = 4,
    C = 3,
    D = 2,
    F = 0
};
#endif //NBU_CITB105_HOMEWORK_MAIN_H
