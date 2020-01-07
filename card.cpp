#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

#include "card.hpp"

// char SUITS[4] = {'C', 'D', 'H', 'S'};
// int RANKS[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

Card::Card()
{
    rank = 0;
    suit = 'U';
}
Card::Card(int initial_rank, char initial_suit)
{
    rank = initial_rank;
    suit = initial_suit;
}

Card::~Card() { cerr << "card " << rank << '-' << suit << " de-allocated\n"; }

bool Card::operator==(const Card &other) { return rank == other.rank; }
bool Card::operator!=(const Card &other) { return rank != other.rank; }
bool Card::operator< (const Card &other) { return rank <  other.rank; }
bool Card::operator> (const Card &other) { return rank >  other.rank; }
bool Card::operator<=(const Card &other) { return rank <= other.rank; }
bool Card::operator>=(const Card &other) { return rank >= other.rank; }

std::ostream& operator<<(std::ostream &strm, const Card &other)
{
    return strm << other.rank << other.suit << '\n';
}

Card::Card(const Card &other)
{
    cerr << "copy " << other.rank << '-' << other.suit << endl;
    rank = other.rank;
    suit = other.suit;
}

int  Card::get_rank() { return rank; }
char Card::get_suit() { return suit; }

bool Card::set_rank(const int other_rank)
{
    if (rank == 0)
    {
        rank = other_rank;
        return true;
    }
    return false;
}

bool Card::set_suit(const char other_suit)
{
    if (suit == 'U')
    {
        suit = other_suit;
        return true;
    }
    return false;
}