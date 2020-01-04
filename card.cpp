#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

#include "card.hpp"

// char SUITS[4] = {'C', 'D', 'H', 'S'};
// int RANKS[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

Card::Card(int initialRank, char initialSuit)
{
    rank = initialRank;
    suit = initialSuit;
}

Card::~Card() { cerr << "card " << rank << suit << " de-allocated\n"; }

bool Card::operator==(const Card &other) { return rank == other.rank; }
bool Card::operator!=(const Card &other) { return rank != other.rank; }
bool Card::operator< (const Card &other) { return rank <  other.rank; }
bool Card::operator> (const Card &other) { return rank >  other.rank; }
bool Card::operator<=(const Card &other) { return rank <= other.rank; }
bool Card::operator>=(const Card &other) { return rank >= other.rank; }

int  Card::getRank() { return rank; }
char Card::getSuit() { return suit; }
