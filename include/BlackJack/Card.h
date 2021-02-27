#pragma once
#ifndef _CARD_H
#define _CARD_H

#include "iostream"
#include "string"

namespace BlackJack
{
    class Card
    {
    public:
        Card(std::string, std::string);

        std::string suit;
        std::string rank;

        void print_card();
        std::string card_to_string();
    };
}

#endif
