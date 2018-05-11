#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Card.h"
#include "PokerHand.h"

Card get_card_from_text(const std::string& card);

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "requires a text file argument\n";
		exit(1);
	}
	std::string filename = argv[1];
	std::fstream file(filename);
	if (!file) {
		std::cerr << "error file not found\n";
		exit(1);
	}

	std::string single_card;
	int count = 0;
	Card hand_1[5];
	Card hand_2[5];
	std::vector<PokerHand*> p_hands;
	while (file >> single_card) {
		// hand 1
		if (((count / 5) % 2) == 0) {
			hand_1[count % 5] = get_card_from_text(single_card);
			if (count % 5 == 4) {
				p_hands.push_back(new PokerHand(hand_1));
			}
		}
		// hand 2
		else {
			hand_2[count % 5] = get_card_from_text(single_card);
			if (count % 5 == 4) {
				p_hands.push_back(new PokerHand(hand_2));
			}
		}
		++count;
	}

	for (PokerHand* hand : p_hands) {
		std::cout << *hand;
	}

	file.close();

	// destroy
	for (PokerHand* hand : p_hands) {
		delete hand;
		hand = nullptr;
	}
	return 0;
}

Card get_card_from_text(const std::string& card) {
	char rank = card[0];
	char suit = card[1];
	Rank rank_;
	Suit suit_;
	switch (rank) {
	case '2':
		rank_ = Rank::TWO;
		break;
	case '3':
		rank_ = Rank::THREE;
		break;
	case '4':
		rank_ = Rank::FOUR;
		break;
	case '5':
		rank_ = Rank::FIVE;
		break;
	case '6':
		rank_ = Rank::SIX;
		break;
	case '7':
		rank_ = Rank::SEVEN;
		break;
	case '8':
		rank_ = Rank::EIGHT;
		break;
	case '9':
		rank_ = Rank::NINE;
		break;
	case 'T':
		rank_ = Rank::TEN;
		break;
	case 'J':
		rank_ = Rank::JACK;
		break;
	case 'Q':
		rank_ = Rank::QUEEN;
		break;
	case 'K':
		rank_ = Rank::KING;
		break;
	case 'A':
		rank_ = Rank::ACE;
		break;
	}
	switch (suit) {
	case 'C':
		suit_ = Suit::CLUBS;
		break;
	case 'D':
		suit_ = Suit::DIAMONDS;
		break;
	case 'H':
		suit_ = Suit::HEARTS;
		break;
	case 'S':
		suit_ = Suit::SPADES;
		break;
	}
	return Card(rank_, suit_);
}
