//
// Created by Miguel Mendoza on 2019-09-06.
//

#include "Card.h"

Card::Card(crank _rank, csuit _suit, int _value) {
    if (_rank >= 1 && _rank <= 13){
        rank = _rank;
    }
    //Set the suit
    if(_suit >= 0 && _suit <= 3){
        suit = _suit;
    }
    value = _value;
}
//Ace=1,Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Jack,Queen,King};
std::string Card::getRank() const {
    switch(rank){
        case 1:
            return "Ace";
            break;
        case 2:
            return "Two";
            break;
        case 3:
            return "Three";
            break;
        case 4:
            return "Four";
            break;
        case 5:
            return "Five";
            break;
        case 6:
            return "Six";
            break;
        case 7:
            return "Seven";
            break;
        case 8:
            return "Eight";
            break;
        case 9:
            return "Nine";
            break;
        case 10:
            return "Ten";
            break;
        case 11:
            return "Jack";
            break;
        case 12:
            return "Queen";
            break;
        case 13:
            return "King";
            break;
        default:
            return"Error";
            break;
    }
}

std::string Card::getSuit() const {
    switch(suit){
        case 0:
            return "Hearts";
            break;
        case 1:
            return "Spades";
            break;
        case 2:
            return "Diamonds";
            break;
        case 3:
            return "♧";
            break;
        default:
            return "Error";
            break;
    }
}

int Card::getValue() const {
    return value;
}

void Card::setRank(crank _rank) {
    rank = _rank;
}

void Card::setSuit(csuit _suit) {
    suit = _suit;

}

void Card::setValue(int _value) {
    value = _value;
}
