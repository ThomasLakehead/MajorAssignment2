#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include "CardDeck.h"

// Constructor for CardDeck class. It populates with 52 cards
CardDeck::CardDeck() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			cardDeck.push_back(Card(j, i));
		}
	}
}

// CardDeck Constructor
CardDeck::CardDeck(std::vector<Card> cardDeck) {
	this->cardDeck = cardDeck;
}

// Set method for CardDeck
void CardDeck::setCardDeck(std::vector<Card> cardDeck) {
	this->cardDeck = cardDeck;
}

// Get method for CardDeck
std::vector<Card> CardDeck::getCardDeck() {
	return cardDeck;
}

// Get user input, randomly draw cards 
std::vector<Card> CardDeck::drawCards(int drawSize) {
	std::vector<Card> hand;
	for (int i = 0; i < drawSize; i++) {
		hand.push_back(CardDeck::cardDeck[i]);
	}

	cardDeck.erase(cardDeck.begin(), cardDeck.begin() + drawSize);
	return hand;
}

// Returns count of cards remaining in deck
int CardDeck::countDeck() {
	return cardDeck.size();
}

// Method to shuffle the cards
void CardDeck::shuffle() {
	srand(unsigned(time(NULL)));
    std::random_shuffle(cardDeck.begin(), cardDeck.end());
}

std::string CardDeck::toString() const
{
	return "Card Deck containing cards.";
}
