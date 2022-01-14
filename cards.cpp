/************************************************
 *
 *     This source file stores all classes 
 *      to store properties for each 
 *      type of playing card.
 *
 *      Also contained is the initialisation
 *      function to assign these values
 *
 *
 ************************************************/
//--------------------------------------------
// LOWEST LEVEL
//--------------------------------------------

#include "cards.h";

int NUM_PLAYERS = 4;
// t_full_deck full_deck;

// Initialise the properties of a deck of cards for a game of shed
// ie values and special actions
int init_full_deck( t_full_deck full_deck ) 
{
    // Clubs Values
    full_deck.clubs.one.value = 1;
    full_deck.clubs.two.value = 2;
    full_deck.clubs.three.value = 3;
    full_deck.clubs.four.value = 4;
    full_deck.clubs.five.value = 5;
    full_deck.clubs.six.value = 6;
    full_deck.clubs.seven.value = 7;
    full_deck.clubs.eight.value = 8;
    full_deck.clubs.nine.value = 9;
    full_deck.clubs.ten.value = 10;
    full_deck.clubs.jack.value = 11;
    full_deck.clubs.queen.value = 12;
    full_deck.clubs.king.value = 13;

    // Diamonds Values
    full_deck.diamonds.one.value = 1;
    full_deck.diamonds.two.value = 2;
    full_deck.diamonds.three.value = 3;
    full_deck.diamonds.four.value = 4;
    full_deck.diamonds.five.value = 5;
    full_deck.diamonds.six.value = 6;
    full_deck.diamonds.seven.value = 7;
    full_deck.diamonds.eight.value = 8;
    full_deck.diamonds.nine.value = 9;
    full_deck.diamonds.ten.value = 10;
    full_deck.diamonds.jack.value = 11;
    full_deck.diamonds.queen.value = 12;
    full_deck.diamonds.king.value = 13;

    // hearts Values
    full_deck.hearts.one.value = 1;
    full_deck.hearts.two.value = 2;
    full_deck.hearts.three.value = 3;
    full_deck.hearts.four.value = 4;
    full_deck.hearts.five.value = 5;
    full_deck.hearts.six.value = 6;
    full_deck.hearts.seven.value = 7;
    full_deck.hearts.eight.value = 8;
    full_deck.hearts.nine.value = 9;
    full_deck.hearts.ten.value = 10;
    full_deck.hearts.jack.value = 11;
    full_deck.hearts.queen.value = 12;
    full_deck.hearts.king.value = 13;

    // spades Values
    full_deck.spades.one.value = 1;
    full_deck.spades.two.value = 2;
    full_deck.spades.three.value = 3;
    full_deck.spades.four.value = 4;
    full_deck.spades.five.value = 5;
    full_deck.spades.six.value = 6;
    full_deck.spades.seven.value = 7;
    full_deck.spades.eight.value = 8;
    full_deck.spades.nine.value = 9;
    full_deck.spades.ten.value = 10;
    full_deck.spades.jack.value = 11;
    full_deck.spades.queen.value = 12;
    full_deck.spades.king.value = 13;

    // Special actions
    // Twos
    full_deck.clubs.two.special = TWO;
    full_deck.diamonds.two.special = TWO;
    full_deck.hearts.two.special = TWO;
    full_deck.spades.two.special = TWO;

    // Red three
    full_deck.diamonds.three.special = RED_THREE;
    full_deck.hearts.three.special = RED_THREE;
    // (Plus corresponding black threes)
    full_deck.clubs.three.special = BLACK_THREE;
    full_deck.spades.three.special = BLACK_THREE;

    // Sevens
    full_deck.diamonds.seven.special = SEVEN;
    full_deck.clubs.seven.special = SEVEN;
    full_deck.hearts.seven.special = SEVEN;
    full_deck.spades.seven.special = SEVEN;

    // Eights
    full_deck.clubs.eight.special = EIGHT;
    full_deck.diamonds.eight.special = EIGHT;
    full_deck.hearts.eight.special = EIGHT;
    full_deck.spades.eight.special = EIGHT;

    // TENS
    full_deck.clubs.ten.special = TEN;
    full_deck.diamonds.ten.special = TEN;
    full_deck.hearts.ten.special = TEN;
    full_deck.spades.ten.special = TEN;

    // JACKS
    full_deck.clubs.jack.special = JACK;
    full_deck.diamonds.jack.special = JACK;
    full_deck.hearts.jack.special = JACK;
    full_deck.spades.jack.special = JACK;

    return 1;
};

int deal_cards ( int NUM_PLAYERS ) 
{
    
};