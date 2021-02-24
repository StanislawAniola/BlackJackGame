#include "BlackJack/Card.h"

BlackJack::Card::Card(std::string suit, std::string rank)
    : suit{suit}, rank{rank}
{}

void BlackJack::Card::print_card()
{
    std::cout << rank << " of " << suit << std::endl;
}

std::string BlackJack::Card::card_to_string()
{
    return rank + " " + suit;
}

