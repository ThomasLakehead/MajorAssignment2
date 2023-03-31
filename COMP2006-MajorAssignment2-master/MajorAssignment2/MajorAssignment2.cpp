// MajorAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Created by Group 7: Andrew Souvanlasy, Thomas Caulfeild, Yama Kamal, Tyler Wyer

#include <iostream>
#include "Card.h"
#include "CardDeck.h"

using namespace std;

int main()
{
	int drawSize;

	// generate deck
	CardDeck deck = CardDeck::CardDeck();

	// shuffle() those cards
    deck.shuffle();

    // header information
    cout << "--------------------------------- COMP 2006 - Major Assignment 2 (Card Dealer) -------------------------------------" << endl;
    cout << "Group 7 - Andrew Souvanlasy(1173602), Thomas Caulfeild(1161001), Yama Kamal(1118270), Tyler Wyer(1177971)" << endl;
    cout << "Enter the amount of cards you want to draw from a 52 card deck. The deck is shuffled each time you run the program." << endl;
    cout << "Due Date: December 8, 2022" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "Card Dealer\n" << "\nI have shuffled a deck of 52 cards.\n" << "\nHow many cards would you like?: ";
    // While loop to make sure the user only enters a number between 0-52
    while (true) {
      
        cin >> drawSize;

        if (cin.good())
        {
            if (drawSize >= 0 && drawSize <= 52)
            {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            }
            else
            {
                std::cout << "Please enter a number between 0-52\n";
            }
        }
        else if (cin.fail())
        {
            cout << "Not a valid number try again!\n";
            cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if (cin.bad())
        {
            std::cout << "A critical error has occured! Exiting program...";
            return 0;
        }
    }

    //Displays cards
    cout << endl << "Here are your cards:" << endl;

    // draws cards based on user input and displays to user
    vector<Card> hand = deck.drawCards(drawSize);
    for (int i = 0; i < hand.size(); i++)
    {
        cout << hand[i].toString() << endl;
    }
    
    
    // countDeck() count remaining cards and display to user
    cout << endl << "There are " << deck.countDeck() << " cards left in the deck." << endl;

    cout << endl << "Good luck!" << endl;
}
