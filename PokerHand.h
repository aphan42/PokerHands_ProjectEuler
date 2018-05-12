#ifndef POKER_HAND_H
#define POKER_HAND_H

#include <algorithm>
#include <iostream>

#include "Card.h"
#include "CardComparator.h"

const short HAND_SIZE = 5;

class PokerHand {
private:
	Card* hand;
public:
	PokerHand(Card* hand_in);
	PokerHand(const PokerHand& other);

	PokerHand& operator=(const PokerHand& other);
	~PokerHand();

	void sort_hand();

	friend std::ostream& operator<< (std::ostream& os, const PokerHand& phand);
	friend void swap(PokerHand& first, PokerHand& second);
};

#endif