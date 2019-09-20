//
// Created by Miguel Mendoza on 2019-09-12.
//

#ifndef CARDGAMES_DECK_H
#define CARDGAMES_DECK_H
#include <vector>
#include "Card.h"
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;
class Deck{
private:
    vector<Card> deck;
public:
    Deck() = default;
    Deck(vector<crank>, vector<csuit>);
    Dealt(int):Vector<card>
    void shuffle();
    int Dealt(vector<Card>);
    void getDeck():Vector<card>
    void Reset();
    void printDeck();
};


#endif //CARDGAMES_DECK_H
