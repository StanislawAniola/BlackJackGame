#include "BlackJack/Deck.h"
#include "iostream"
#include "string"
#include "algorithm"
#include "random"
#include "chrono"
#include "vector"

BlackJack::Deck::Deck()
    : deck{std::vector <BlackJack::Card>{}}
{}

void BlackJack::Deck::print_deck()
{
    std::string deck_comp = {""};

    for (size_t i = 0; i < deck.size(); ++i) {
        deck_comp += "\n " + deck[i].card_to_string();
    }
    std::cout << "The deck has: " << deck_comp;
}

void BlackJack::Deck::shuffle()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(std::begin(deck), std::end(deck), std::default_random_engine(seed));
}

auto BlackJack::Deck::deal() -> Card
{
    Card single_card = deck.back();
    deck.pop_back();
    return single_card;
}