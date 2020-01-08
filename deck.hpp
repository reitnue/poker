#ifndef DECK_HPP
#define DECK_HPP

#include <vector>
#include "card.hpp"

class Deck
{
private:
    vector<Card> deck;
public:
    Deck();
    Deck(bool);
    ~Deck();

    void shuffle();
    Card deal();
    void add(Card);
    int size();
};

#endif