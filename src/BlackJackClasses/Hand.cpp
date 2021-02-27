#include "BlackJack/Hand.h"
#include "iostream"
#include "string"
#include "algorithm"
#include "vector"

BlackJack::Hand::Hand()
    : cards{std::vector <BlackJack::Card> {}}
    , aces{0}
    , value{0}
{}

void BlackJack::Hand::add_card(Card card, std::map <std::string, int> values)
{
    cards.push_back(card);
    value = value + values[card.rank];
    if (card.rank == "Ace")
    {
        aces += 1;
    }
}

void BlackJack::Hand::adjust_for_ace()
{
    while (value > 21 && aces)
    {
        value -= 10;
        aces -= 1;
    }
}