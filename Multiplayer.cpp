#include <algorithm>
#include <iostream>
#include "Multiplayer.h"

Multiplayer::Multiplayer () {
    m_gameOver = false;
    int playerAmount = 0;
    std::string tempName;
    while (playerAmount < 1) {
        std::cout << "How many people are playing? ";
        if (!(std::cin >> playerAmount)){
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Invalid Input! Please enter a valid number of one or more." << std::endl;
            continue;
        }

        std::cin.ignore(100, '\n');

        if (playerAmount < 1) {
            std::cout << "You cannot play this game without a player amount of one or more. Please try again.\n";
        }
    }
    for (int i = 0; i < playerAmount; i++) {
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::getline (std::cin, tempName);
        m_players.emplace_back(tempName);
    }
    mpPlayGame();
}

void Multiplayer::mpPlayGame() {
    m_players[0].displayRules();
    while (!m_gameOver) {
        for (int i = 0; i < m_players.size(); i++) {
            std::cout << "\n\n" << m_players[i].getPlayerName()
                      << " (Score:" << m_players[i].getGameScore() << ") - ";
            m_players.at(i).playGame();
            displayScoreboard();
        }
        checkForWinner();
    }

}

void Multiplayer::checkForWinner() {
    for (int i = 0; i < m_players.size(); i++)
        if (m_players.at(i).getGameScore() >= 50) {
        m_gameOver = true;
    }
    if (m_gameOver == true) {
        std::sort(m_players.begin(), m_players.end(), [](auto p1, auto p2) {
            return p1.getGameScore() > p2.getGameScore();
        });
        std::cout << "\n\nCongratulations! " << m_players[0].getPlayerName()
                  << " you win with a score of " << m_players[0].getGameScore();
    }
}

void Multiplayer::displayScoreboard() const {
for (int i = 0; i < m_players.size(); i++)
    std::cout << m_players.at(i).getPlayerName() << " (Score:" << m_players.at(i).getGameScore() << ") | ";
}
