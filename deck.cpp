#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

#include "card.hpp"

int main() {
    for (int i = 0; i < 13; i++)
    {
        cout << RANKS[i];
    }
    cout << '\n';
    Card aceSpade(14, 'S');
    cout << aceSpade.getRank();
    cout << aceSpade.getSuit();
    cout << '\n';
    return 0;
}
