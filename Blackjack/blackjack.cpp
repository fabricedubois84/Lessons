#include "Card.h"
#include "Deck.h"
#include <iostream>
#include <string>

int main ( int argc, char* argv[] )
{
    const Card cardQueenHearts{ Card::RANK_QUEEN, Card::SUIT_HEART };
    cardQueenHearts.print();

    std::cout << " has the value " << cardQueenHearts.value() << '\n';

    Deck deck{};
    deck.print();
    //deck.shuffle();
    //deck.print();
    
    return 0;
}