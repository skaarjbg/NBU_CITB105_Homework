/**
 * HOMEWORK EXERCISE 1
 * 2...9             -                     Two,Three,Four...Nine
 * A                 -                     Ace
 * J                 -                     Jack
 * Q                 -                     Queen
 * K                 -                     King
 * D                 -                     Diamonds
 * H                 -                     Hearts
 * S                 -                     Spades
 * C                 -                     Clubs
 *
 * Input: QS
 * Output: Queen of spades
 */

#include <iostream>
#include <string.h>

#include "main.h"

#define ERROR -1

using namespace std;

int main(int argc, char *argv[]) {
    static const char *cards = (char *) "AJQK";
    static const char *colors = (char *) "DHSC";
    static const char *numbers = (char *) "0123456789";

    string card;
    string color;

    if (strlen(argv[1]) > 2) {
        cerr << "Input too long" << endl;
        return ERROR;
    }

    for (int i = 0; i < 2; i++) {
        char c = argv[1][i];
        if(strchr(cards, c)) {
            card = string(card_list[get_card_from_char(c)]);
        } else if(strchr(colors, c)) {
            color = string(colors_list[get_color_from_char(c)]);
        } else if(strchr(numbers, c)) { // perhaps a number between 0-9, if true it's a card
            int num = c - '0'; // convert the character to the number it represents
            card = string(card_list[num]);
        } else {
            cerr << "Invalid input - " << c << endl;
            return ERROR;
        }
    }
    cout << card << " of " << color << endl;
}

Cards get_card_from_char(char c) {
    switch (c) {
        case 'A' : {
            return Cards::ACE;
        }
        case 'J' : {
            return Cards::JACK;
        }
        case 'Q' : {
            return Cards::QUEEN;
        }
        case 'K' : {
            return Cards::KING;
        }
        default:break;
    }
}

Colors get_color_from_char(char c) {

    switch(c) {
        case 'D' : {
            return Colors::DIAMONDS;
        }
        case 'H' : {
            return Colors::HEARTS;
        }
        case 'S' : {
            return Colors::SPADES;
        }
        case 'C' : {
            return Colors::CLUBS;
        }
        default:break;
    }
}