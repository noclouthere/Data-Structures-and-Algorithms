//
// Created by Miguel Mendoza on 2019-09-06.
//

#ifndef CARDGAMES_CARD_H
#define CARDGAMES_CARD_H

#include<iostream>

enum csuit {Hearts, Spades, Diamonds, Clubs };
enum crank {Ace=1,Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Jack,Queen,King};

class Card {
//private section for data member and private functions
private:
    crank rank;
    csuit suit;
    int value;
public:
    //Default constructor
    Card() = default;
    //Parameterized constructor
    Card(crank, csuit, int);
    //Getters
    std::string getRank() const;
    std::string getSuit() const;
    int getValue() const;
    //Setters
    void setRank(crank);
    void setSuit(csuit);
    void setValue(int);
};


#endif //CARDGAMES_CARD_H
