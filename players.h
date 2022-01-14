/*****************************
 * 
 * Up to 6 players can play. A class is defined for each.
 * As well as this, we also define classes for blind cards, 
 * open cards, hand cards and remaining deck.
 * 
 * **************************/
#include "cards.h";

/****************************
 * Card storage classes
 ***************************/
class t_blind_cards
{
    public:
    t_card slot_1;
    t_card slot_2;
    t_card slot_3;
};

class t_open_cards
{
    public:
    t_card open_1;
    t_card open_2;
    t_card open_3;
};

class t_hand_cards
{
    public:
    t_card hand_1;
    t_card hand_2;
    t_card hand_3;
};

/**********************
 * Player class to store cards that they're dealt
 *********************/
class t_player
{
    public:
    t_blind_cards blinds;
    t_open_cards opens;
    t_hand_cards hands;
};

/**********************
 * Class to store all cards of all players as they're dealt
 *********************/
class t_full_game_framework
{
    public:
    t_player player_1;
    t_player player_2;
    t_player player_3;
    t_player player_4;
    t_player player_5;
    t_player player_6;
};