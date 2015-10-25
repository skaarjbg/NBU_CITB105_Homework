/**
 * HOMEWORK EXERCISE 1
 * 2...9            -                     Two,Three,Found...Nine
 * A                 -                     Ace
 * J                 -                      Jack
 * Q                 -                     Queen
 * K                 -                     King
 * D                 -                     Diamonds
 * H                 -                     Hearts
 * S                 -                     Spades
 * C                 -                     Clubs
 * Input: QS

 * Output: Queen of spades
 */

#include <iostream>
#include <string.h>

enum Cards {
    TWO = 2,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    ACE,
    JACK,
    QUEEN,
    KING
};

enum Colors {
    DIAMONDS,
    HEARTS,
    SPADES,
    CLUBS
};

static const char *card_list[]{
        (char *) "", //0
        (char *) "", //1
        (char *) "Two",
        (char *) "Three",
        (char *) "Four",
        (char *) "Five",
        (char *) "Six",
        (char *) "Seven",
        (char *) "Eight",
        (char *) "Nine",
        (char *) "Ace",
        (char *) "Jack",
        (char *) "Queen",
        (char *) "King"
};

static const char *colors_list[]{
        (char *) "Diamonds",
        (char *) "Hearts",
        (char *) "Spades",
        (char *) "Clubs"
};

using namespace std;

Cards get_card_from_char(char);
Colors get_color_from_char(char);

int main(int argc, char *argv[]) {
    static const char *cards = (char *) "AJQK";
    static const char *colors = (char *) "DHSC";
    static const char *numbers = (char *) "0123456789";

    string card;
    string color;

    if (strlen(argv[1]) > 2) {
        cout << "INVALID INPUT" << endl;
        return 153;
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
            cout << "Invalid input - " << c << endl;
            return 121;
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