#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Currency.h"
#include "Card.h"
using namespace std;

class Player {
private:
	string playerName;
	double balance;
	Card* cards;
	int numCards;

public:
	//constructor
	Player();

	//setters
	void setName(string name);
	void setBalance(double balance);

	//Getters
	string getName();
	double getBalance();
	int getNumCards();

	//Card functions
	void displayCard();
	void markNumber(int number);

	//Player functions
	void turn();
	bool hasWon();

	//Destructor
	~Player();

};

#endif
