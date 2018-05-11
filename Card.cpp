#include "Card.h"

Card::Card() {}
Card::Card(Rank r, Suit s) : rank(r), suit(s) {}

std::ostream& operator<< (std::ostream& os, const Card& card) {
	switch (card.rank) {
	case Rank::TWO:
		os << "Two";
		break;
	case Rank::THREE:
		os << "Three";
		break;
	case Rank::FOUR:
		os << "Four";
		break;
	case Rank::FIVE:
		os << "Five";
		break;
	case Rank::SIX:
		os << "Six";
		break;
	case Rank::SEVEN:
		os << "Seven";
		break;
	case Rank::EIGHT:
		os << "Eight";
		break;
	case Rank::NINE:
		os << "Nine";
		break;
	case Rank::TEN:
		os << "Ten";
		break;
	case Rank::JACK:
		os << "Jack";
		break;
	case Rank::QUEEN:
		os << "Queen";
		break;
	case Rank::KING:
		os << "King";
		break;
	case Rank::ACE:
		os << "Ace";
		break;
	}
	os << " of ";
	switch (card.suit) {
	case Suit::CLUBS:
		os << "clubs";
		break;
	case Suit::DIAMONDS:
		os << "diamonds";
		break;
	case Suit::HEARTS:
		os << "hearts";
		break;
	case Suit::SPADES:
		os << "spades";
		break;
	}
	os << "\n";
	return os;
}