#include <iostream>
using namespace std;
#include <stdio.h>
// #include <string.h>

// #include "card.hpp"
#include "deck.hpp"
#include "war.hpp"
#include "card.hpp"

War::War()
{
    Deck temp_deck = Deck(true); // get a standard deck
    temp_deck.shuffle();
    int count = 0;
    while (temp_deck.size() > 0)
    {
        if (count % 2 == 0)
        {
            player1.add(temp_deck.deal());
        }
        else
        {
            player2.add(temp_deck.deal());
        }
        count++;
    }
    // cout << player1.size() << endl;
    // cout << player2.size() << endl;
}

War::~War()
{

}

bool War::play()
{
    while ((player1.size() != 0) & (player2.size() != 0))
    {
        Deck round;
        bool tie;
        do
        {
            tie = false;
            Card card1 = player1.deal();
            Card card2 = player2.deal();
            round.add(card1);
            round.add(card2);
            cout << "1 " << card1;
            cout << "2 " << card2;
            if (card1 > card2)
            {
                while (round.size() > 0)
                {
                    player1.add(round.deal());
                }
            }
            else if (card1 < card2)
            {
                while (round.size() > 0)
                {
                    player2.add(round.deal());
                }   
            }
            else
            {
                tie = true;
                for (int count = 0; count < 3; count++)
                {
                    round.add(player1.deal());
                    round.add(player2.deal());
                }
            }
        } 
        while (tie);
    }
    return player2.size() == 0; // true if player 1 won

}