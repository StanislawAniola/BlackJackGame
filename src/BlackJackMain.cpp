#include "BlackJack/Deck.h"
#include "BlackJack/Hand.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <typeinfo>

void player_busts(BlackJack::Hand hand_player, BlackJack::Hand hand_dealer)
{
    std::cout << "\nBUST PLAYER";
}

void player_wins(BlackJack::Hand hand_player, BlackJack::Hand hand_dealer)
{
    std::cout << "\nPLAYER WINS!";
}

void dealer_busts(BlackJack::Hand hand_player, BlackJack::Hand hand_dealer)
{
    std::cout << "\nPLAYER WINS! DEALER BUSTED!";
}

void dealer_wins(BlackJack::Hand hand_player, BlackJack::Hand hand_dealer)
{
    std::cout << "\nDEALER WINS!";
}


int main()
{
    std::vector <std::string> suits = {"Hearts", "Dimonds", "Spades", "Clubs"};
    std::vector <std::string> ranks = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
    std::map <std::string, int> {{"Two", 2}, {"Three", 3}, {"Four", 4}, {"Five", 5}, {"Six", 6}, {"Seven", 7}, {"Eight", 8}, {"Nine", 9}, {"Queen", 10}, {"King", 10}, {"Ace", 11}};

    return 0;
}