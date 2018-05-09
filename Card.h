#ifndef CARD_H
#define CARD_H

#include <iostream>

enum class Suit{CLUBS, DIAMONDS, HEARTS, SPADES};
enum class Rank{TWO, THREE, FOUR, FIVE, SIX, SEVEN, 
			EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

class Card {
private:
	Rank rank;
	Suit suit;
public:
	Card();
	Card(Rank r, Suit s);
	friend std::ostream& operator<< (std::ostream &os, const Card& card);
};

#endif
