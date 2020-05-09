#include "Deck.h"
#include <iostream>

Deck::Deck()
{
    index_type card{0};

    index_type suits{ static_cast<index_type>(Card::MAX_SUITS) };
    index_type ranks{ static_cast<index_type>(Card::MAX_RANKS) };

    for ( index_type suit{0}; suit < suits; ++suit )
    {
        for ( index_type rank{0}; rank < ranks; ++rank )
        {
            m_deck[card] = { static_cast<Card::Rank>(rank), static_cast<Card::Suit>(suit) };
            ++card;
        }
    }
}

void Deck::print() const
{
    for (const auto& card : m_deck)
    {
        card.print();
        std::cout << ' ';
    }

    std::cout << '\n';
}

