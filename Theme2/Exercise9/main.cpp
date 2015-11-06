/**
 * HOMEWORK EXERCISE 9
 */

#include <iostream>
#include <string.h>

#define ERROR -1

using namespace std;

/* Tested on Linux system, behavior on Windows may vary */
int main(int argc, char *argv[]) {

    char *ignored_symbols = (char *) " .,-;[]\'\"()*"; //more ignored symbols can be added easily
    wchar_t input[255];
    wchar_t *end = NULL;
    bool is_palindrome = true;

    //set locales to allow output of cyrillic characters
    setlocale(LC_ALL, "");

    wcout << "Please enter a string" << endl;
    wcin.getline(input, 255);

    //strings with uneven number of characters cannot be palindromes
    if(wcslen(input) % 2 != 0 ) {
        wcout << input << " is not a palindrome" << endl;
        return EXIT_SUCCESS;
    }

    //get a pointer to the end of the string
    for (wchar_t *ptr = input; *ptr != '\0'; ptr++) {
        //convert every character to lower, to ignore differences in letter capitalization
        ptr[0] = (wchar_t) towlower((wint_t) ptr[0]);
        end = ptr;
    }

    //compare the string both ways to determine if it's a palindrome
    //loop continues after passing halfway the string to capitalize all different characters,
    //otherwise, when the pointers "meet" we should stop looping as it would be redundant
    for (wchar_t *start = input; *start != '\0'; /* empty on purpose */ ) {
        wchar_t s = start[0];
        wchar_t e = end[0];

        //check if the current symbols compared are to be ignored
        if (strchr(ignored_symbols, s)) {
            start++;
            continue;
        }
        if (strchr(ignored_symbols, e)) {
            end--;
            continue;
        }

        //capitalize the characters that prevent the string from being a palindrome
        if (s != e) {
            start[0] = (wchar_t) towupper((wint_t) s);
            is_palindrome = false;
        }
        start++;
        end--;
    }

    is_palindrome ? wcout << input << " is a palindrome" << endl
                  : wcout << input << " is not a palindrome" << endl;
}

