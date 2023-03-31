#ifndef GROUP7_CARDDECK_H
#define GROUP7_CARDDECK_H

#include <vector>
#include <string>
#include "Card.h"

class CardDeck
{
private:
	std::vector<Card> cardDeck; // Holds 52 cards

public:
	//constructor with no parameter
	CardDeck();

	//constructor with vector of Card objects
	CardDeck(std::vector<Card>);

	void setCardDeck(std::vector<Card>);

	std::vector<Card> getCardDeck();

	//shuffles deck
	void shuffle();

	//draws number of cards based on user input
	std::vector<Card> drawCards(int);

	//counts remaininig cards in deck after drawCards()
	int countDeck();

	//toString method for CardDeck object
	std::string toString() const;
};
#endif
