#include <iostream>
#include <algorithm> 
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <stdio.h>
#include <string.h>

#include "card.hpp"
#include "deck.hpp"

Deck::Deck()
{
    srand ( unsigned ( time(0) ) ); // uncomment for randomness
}

Deck::Deck(bool standard)
{
    Deck();
    if (standard == true)
    {
        deck.reserve(52);
        int rank_index, suit_index;
        for (rank_index = 0; rank_index < 13; rank_index++)
        {
            for (suit_index = 0; suit_index < 4; suit_index++)
            {
                deck.push_back(Card(RANKS[rank_index], SUITS[suit_index]));
            }
        }
    }
}

Deck::~Deck() { }

int Deck::size()
{
    return deck.size();
}

void Deck::shuffle()
{
    random_shuffle(deck.begin(), deck.end());
    return;
}

void Deck::add(Card other)
{
    deck.push_back(other);
    return;
}
Card Deck::deal()
{
    if (this->size() == 0)
    {
        cerr << "Deck Empty" << endl;
        return Card();
    }
    Card temp = deck.front();
    cerr << "deal " << temp << endl;
    deck.erase(deck.begin());
    return temp;
}


// int main() {
//     Deck temp_deck;
//     temp_deck.shuffle();
//     cerr << "deck" << endl;
//     temp_deck.add(Card(3, 'S'));
//     cout << temp_deck.deal();
//     temp_deck.deal();
//     cout << temp_deck.size() << '\n';
//     // // int i;
//     cerr << "end" << endl;
//     return 0;
// }
