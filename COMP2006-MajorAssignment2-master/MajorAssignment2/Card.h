#ifndef GROUP7_CARD_H
#define GROUP7_CARD_H
#include <vector>
#include <string>

class Card
{
    // Creating the rank/suit variables as well as the suit and rank vectors to store the different type of suits/ranks
private:
	int rank;
	int suit;
    std::vector<std::string> ranks{ "Clubs", "Diamonds", "Hearts", "Spades" };
    std::vector<std::string> suits{"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

// Get and set methods for all the variables above
public:
    Card(int, int);
    std::string toString() const;
    void setRank(int);
    int getRank();
    void setSuit(int);
    int getSuit();
    void setSuits(std::vector<std::string>);
    std::vector<std::string> getSuits();
    void setRanks(std::vector<std::string>);
    std::vector<std::string> getRanks();
};
#endif

