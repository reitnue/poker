#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

class Card
{
    int rank;
    char suit;
public:
    Card(int, char);
    ~Card();
    int getRank();
    char getSuit();
};

Card::Card(int initialRank, char initialSuit)
{
	rank = initialRank;
	suit = initialSuit;
}

Card::~Card() {}

int Card::getRank()
{
	return rank;
}
char Card::getSuit()
{
	return suit;
}

int main() {
  cout << "Hello World!\n";
  Card aceSpade(14, 'S');
  cout << aceSpade.getRank();
  cout << aceSpade.getSuit();
  return 0;
}
