//
// Created by Miguel Mendoza on 2019-09-12.
//

#include <iostream>
#include "Card.h"
#include "Card.cpp"
#include "Deck.h"


int Deck::Deck() {
    for (int suit = 0; suit < 4; ++suit) {
        Card temp;
        temp.setSuit(csuit(rank));

        for (int rank = 0; rank < 14; ++rank) {
            temp.setRank(crank(rank));
            deck.push_back(temp);
        }
    }
}

void Deck::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));
}

int Deck::Reset() {
    //empty out the current deck
    deck.clear();
    //fill the deck back up
    for (int suit = 0; suit < 4; ++suit){
        Card temp;
        temp.setSuit(csuit(suit));

        for (int rank = 0; rank < 14; ++rank) {
            temp.setRank(crank(rank));
            deck.push_back(temp);
        }
    }
}

void Deck::getDeck() {
    return deck;
}

void Deck::printDeck() {
    for (Card card: deck) {
        cout << firstCard.getRank() << " of " << firstCard.getSuit() << "s" << endl;
    }
}

int Deck::Dealt(vector<Card>) {
    return 0;
}

