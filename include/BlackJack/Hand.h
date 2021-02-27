#pragma once
#ifndef _HAND_H
#define _HAND_H

#include "Blackjack/Card.h"
#include "iostream"
#include "string"
#include "vector"
#include "map"

namespace Blackjack{
    class Hand{
    public:
        Hand();

        std::vector<Blackjack::Card> cards;
        int value;
        int aces;

        void add_card(Blackjack::Card, std::map <std::string, int>);
        void adjust_for_ace();
    };
}

#endif
