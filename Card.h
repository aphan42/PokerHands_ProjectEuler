#ifndef CARD_H
#define CARD_H

#include <iostream>

enum Suit{CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank{TWO, THREE, FOUR, FIVE, SIX, SEVEN, 
			EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

class Card {
private:
	Suit suit;
	Rank rank;
public:
	Card();
	Card(Rank r, Suit s);
	friend std::ostream& operator<< (std::ostream &os, const Card& card);
};

#endif