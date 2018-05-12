#include "HandEvaluator.h"

HandEvaluator::HandEvaluator(PokerHand h1_in, PokerHand h2_in) : h1(h1_in), h2(h2_in) {
	h1.sort_hand();
	h2.sort_hand();
}

std::ostream& operator<< (std::ostream& os, const HandEvaluator& he) {
	os << "Hand 1\n";
	os << "----------\n";
	os << he.h1;
	os << "------------------------------\n";
	os << "Hand 2\n";
	os << "----------\n";
	os << he.h2;
	return os;
}