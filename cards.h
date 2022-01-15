// Special action INT values
int TWO             = 0;
int RED_THREE       = 1; 
int BLACK_THREE     = 2; 
int SEVEN           = 3;
int EIGHT           = 4;
int TEN             = 5;
int JACK            = 6;

// Lowest level class. It defines each card's value and if it has any special action
 class t_card
 {
     public:
     int value;
     int special;
 };

 class t_clubs
{
    public:
    t_card one;
    t_card two;
    t_card three;
    t_card four;
    t_card five;
    t_card six;
    t_card seven;
    t_card eight;
    t_card nine;
    t_card ten;
    t_card jack;
    t_card queen;
    t_card king;
};

 class t_diamonds
{
    public:
    t_card one;
    t_card two;
    t_card three;
    t_card four;
    t_card five;
    t_card six;
    t_card seven;
    t_card eight;
    t_card nine;
    t_card ten;
    t_card jack;
    t_card queen;
    t_card king;
};

 class t_hearts
{
    public:
    t_card one;
    t_card two;
    t_card three;
    t_card four;
    t_card five;
    t_card six;
    t_card seven;
    t_card eight;
    t_card nine;
    t_card ten;
    t_card jack;
    t_card queen;
    t_card king;
};

 class t_spades
{
    public:
    t_card one;
    t_card two;
    t_card three;
    t_card four;
    t_card five;
    t_card six;
    t_card seven;
    t_card eight;
    t_card nine;
    t_card ten;
    t_card jack;
    t_card queen;
    t_card king;
};

// Highest level class for addressing each card
class t_full_deck
{
    public:
    t_clubs clubs;
    t_diamonds diamonds;
    t_hearts hearts;
    t_spades spades;
};

// Initialise the properties of a deck of cards for a game of shed
// ie values and special actions
int init_full_deck( void ) 
{
};

// An array of all different cards
// It is ordered in alphabetical and ascending
// order.
t_full_deck full_deck_arr[52] = { 
    // Fill in or remove
};
