#include <iostream>

#include "Card.h"
#include "PokerHand.h"


int main(int argc, char** argv) {
	Card sample_hand[5];
	Card c1(Rank::ACE, Suit::SPADES);
	sample_hand[0] = c1;
	Card c2(Rank::KING, Suit::SPADES);
	sample_hand[1] = c2;
	Card c3(Rank::QUEEN, Suit::SPADES);
	sample_hand[2] = c3;
	Card c4(Rank::JACK, Suit::SPADES);
	sample_hand[3] = c4;
	Card c5(Rank::TEN, Suit::SPADES);
	sample_hand[4] = c5;
	PokerHand ex_hand(sample_hand);
	std::cout << ex_hand;
	return 0;
}