#ifndef POKER_HAND_H
#define POKER_HAND_H

#include <iostream>

#include "Card.h"

const short HAND_SIZE = 5;

class PokerHand {
private:
	Card* hand;
public:
	PokerHand(Card* hand_in);
	PokerHand(const PokerHand& other);

	PokerHand& operator=(const PokerHand& other);
	~PokerHand();

	friend std::ostream& operator<< (std::ostream& os, const PokerHand& phand);
};

#endif