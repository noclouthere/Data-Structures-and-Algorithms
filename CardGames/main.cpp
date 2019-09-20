#include <iostream>
#include "Deck.h"

using namespace std;

int main() {


    std::cout << "Card Game Heaven!" << std::endl;
    cout << "Initializing a deck of cards:";

    Deck d1;

    cout << " done." << endl;

    //d1.printDeck();

    vector<Card> miguel;
    vector<Card> alonzo;
    vector<Card> marcos;
    vector<Card> stephen;
    vector<Card> eli;

    //put the hands in a vector
    vector<vector<Card>> hands;
    hands.push_back(miguel);
    hands.push_back(alonzo);
    hands.push_back(marcos);
    hands.push_back(stephen);
    hands.push_back(eli);

    //shuffle the deck
    d1.shuffle();

    //d1.printDeck();

    //deal the deck
    int num = 0;
    while(!d1.getDeck().empty()){
        vector<Card> temp = d1.deal(1);
        hands[num].instert(miguel.end(), temp.begin,temp.end());
    }


//    Card firstCard(crank::Ace,csuit::Clubs,1);
//
//    cout << firstCard.getRank() << " of " << firstCard.getSuit() << "'s" << endl;


    return 0;
}