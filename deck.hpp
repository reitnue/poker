#include <vector>

class Deck
{
private:
    vector<Card> deck;
public:
    Deck();
    ~Deck();

    void shuffle();
    Card deal();
    int size();
};