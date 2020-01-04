#ifndef CARD_HPP
#define CARD_HPP

class Card
{
private:
    int rank;
    char suit;
public:
    Card(int, char);
    ~Card();

    bool operator==(const Card &);
    bool operator!=(const Card &);
    bool operator< (const Card &);
    bool operator> (const Card &);
    bool operator<=(const Card &);
    bool operator>=(const Card &);
    
    int getRank();
    char getSuit();
};

static char SUITS[4] = {'C', 'D', 'H', 'S'};
static int RANKS[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

#endif