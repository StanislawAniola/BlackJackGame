#pragma once
#ifndef _HAND_H
#define _HAND_H

#include "Blackjack/Card.h"
#include "iostream"
#include "string"
#include "vector"
#include "map"

namespace BlackJack{
    class Hand{
    public:
        Hand();

        std::vector<BlackJack::Card> cards;
        int value;
        int aces;

        void add_card(BlackJack::Card, std::map <std::string, int>);
        void adjust_for_ace();
    };
}

#endif