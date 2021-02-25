#pragma once
#ifndef _DECK_H
#define _DECK_H

#include "BlackJack/Card.h"

#include "iostream"
#include "string"
#include "vector"

namespace BlackJack{
    class Deck{
    public:
        Deck();
        std::vector<Card> deck;

        void print_deck();
        void shuffle();

        BlackJack::Card deal();
    };
}

#endif
