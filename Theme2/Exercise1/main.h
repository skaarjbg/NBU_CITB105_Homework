//
// Created by skaarjbg on 10/25/15.
//

#ifndef NBU_CITB105_HOMEWORK_MAIN_H
#define NBU_CITB105_HOMEWORK_MAIN_H

Cards get_card_from_char(char);
Colors get_color_from_char(char);

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
#endif //NBU_CITB105_HOMEWORK_MAIN_H
