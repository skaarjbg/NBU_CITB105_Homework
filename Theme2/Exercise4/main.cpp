/**
 * HOMEWORK EXERCISE 4
 */

#include <iostream>

#define CHECK_VALID_GRADE(x) ((x >= 2) && (x <= 6)) ? 1 : 0
#define GRADE_OUT_OF_RANGE "Grade out of range (2 <= grade <= 6) : "

#define ERROR -1

using namespace std;

typedef struct student {
    string first_name;
    string last_name;
    string fac_num;
    double grade1;
    double grade2;
    double grade3;
} student;

int main(int argc, char *argv[]) {

    student student;
    student.first_name = string(argv[1]);
    student.last_name = string(argv[2]);
    student.fac_num = string(argv[3]);
    student.grade1 = atof(argv[4]);
    student.grade2 = atof(argv[5]);
    student.grade3 = atof(argv[6]);

    double num = atof(argv[4]);
    if (CHECK_VALID_GRADE(num)) {
        student.grade1 = num;
    } else {
        cerr << GRADE_OUT_OF_RANGE << num << endl;
        return ERROR;
    }

    num = atof(argv[5]);
    if (CHECK_VALID_GRADE(num)) {
        student.grade2 = num;
    } else {
        cerr << GRADE_OUT_OF_RANGE << num << endl;
        return ERROR;
    }

    num = atof(argv[6]);
    if (CHECK_VALID_GRADE(num)) {
        student.grade3 = num;
    } else {
        cerr << GRADE_OUT_OF_RANGE << num << endl;
        return ERROR;
    }

    double median_grade = (student.grade1 + student.grade2 + student.grade3) / 3;

    cout << student.fac_num << " - " << median_grade << endl;
}
