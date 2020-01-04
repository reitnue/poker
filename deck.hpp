class Deck
{
private:
    Deck deck[52];
public:
    Deck();
    ~Deck();

    void shuffle();
    Card deal();
};