#ifndef HAND_EVALUATOR_H
#define HAND_EVALUATOR_H

#include "PokerHand.h"

class HandEvaluator {
private:
	PokerHand h1;
	PokerHand h2;
public:
	HandEvaluator(PokerHand h1_in, PokerHand h2_in);
};


#endif