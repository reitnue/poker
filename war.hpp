/*
 Sample game - nothing too spectacular here, just trying to get a game to work
 Goal is to divide a deck in half and play war -> output the winner and be done.
 Basic war rules, if someone cannot produce more cards they lose.
*/

#include <vector>
#include "deck.hpp"

class War
{
private:
	Deck player1;
	Deck player2;
public:
	War();
	~War();

	bool play(); // true if player 1 wins
};