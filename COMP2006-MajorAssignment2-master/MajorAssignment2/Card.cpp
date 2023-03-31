#include <string>
#include "Card.h"


// Constructor for creating a card
Card::Card(int suit, int rank){
	this->suit = suit;
	this->rank = rank;
}

// Rank get and set method
void Card::setRank(int rank)
{
	this->rank = rank;
}

int Card::getRank(){
    return rank;
}
// Suit get and set method
void Card:: setSuit(int suit)
{
    this->suit = rank;
}

int Card::getSuit() {
	return suit;
}

// Ranks get and set method
std::vector<std::string> Card::getRanks() {
	return ranks;
}

void Card::setRanks(std::vector<std::string> ranks)
{
	this->ranks = ranks;
}

// Suits get and set method
std::vector<std::string> Card::getSuits() {
	return suits;
}

void Card::setSuits(std::vector<std::string> suits) {
	this->suits = suits;
}

// Card toString method ex("Ace of Spades")
std::string Card::toString() const {
	return suits[suit] + " of " + ranks[rank];
}
