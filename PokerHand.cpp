#include "PokerHand.h"

PokerHand::PokerHand(Card* hand_in) {
	hand = new Card[HAND_SIZE];
	for (int i = 0; i < HAND_SIZE; ++i) {
		hand[i] = hand_in[i];
	}
}

PokerHand::PokerHand(const PokerHand& other) {
	this->hand = new Card[HAND_SIZE];
	for (int i = 0; i < HAND_SIZE; ++i) {
		hand[i] = other.hand[i];
	}
}

PokerHand& PokerHand::operator=(const PokerHand& other) {
	PokerHand tmp(other);
	swap(*this, tmp);
	return *this;
}

PokerHand::~PokerHand() {
	delete[] hand;
}

std::ostream& operator<< (std::ostream& os, const PokerHand& phand) {
	for (int i = 0; i < HAND_SIZE; ++i) {
		std::cout << phand.hand[i];
	}
	return os;
}

void swap(PokerHand& first, PokerHand& second) {
	using std::swap;
	swap(first.hand, second.hand);
}