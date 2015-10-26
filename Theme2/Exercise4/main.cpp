/**
 * HOMEWORK EXERCISE 4
 */

#include <iostream>
#define CHECK_VALID_GRADE(x) if((x >= 2) && (x <= 6)) (x); else { cerr << "Error!"; return 123; }

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

    CHECK_VALID_GRADE(student.grade3);
//    for(int i = 0; i < argc; i++) {
//        double num = atof(argv[i+4]);
//        if(num > 6 && num < 2) {
//            cerr <<  "Grade " << i << " is out of bounds (2 <= grade <= 6)";
//            return 134;
//        }
//    }

    double median_grade = (student.grade1 + student.grade2 + student.grade3) / 3;

    cout << student.fac_num << " - " << median_grade << endl;
}
