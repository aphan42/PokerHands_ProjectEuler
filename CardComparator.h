#ifndef CARD_COMPARATOR_H
#define CARD_COMPARATOR_H

#include "Card.h"

class CardComparator {
public:
	bool operator()(const Card& c1, const Card& c2) {
		return c1.get_rank() < c2.get_rank();
	}
};

#endif