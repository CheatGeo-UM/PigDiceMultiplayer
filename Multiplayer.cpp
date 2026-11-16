#include <iostream>
#include "Multiplayer.h"

Multiplayer::Multiplayer () {
    m_gameOver = false;
    int playerAmount = 0;
    std::string tempName;
    std::cout << "How many people are playing? ";
    std::cin >> playerAmount;
    std::cin.ignore();
    for (int i = 0; i < playerAmount; i++) {
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::getline (std::cin, tempName);
        m_players.emplace_back(tempName);
    }
    //mpPlayGame();
}

void Multiplayer::mpPlayGame() {
    m_players[0].displayRules();
    while (!m_gameOver) {
        for (int i = 0; i < m_players.size(); i++) {
            std::cout << "\n\n" << m_players[i].getPlayerName();
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
}

void Multiplayer::displayScoreboard() {
for (int i = 0; i < m_players.size(); i++)
    std::cout << m_players.at(i).getPlayerName() << " (Score:" << m_players.at(i).getGameScore() << ") |";
}

/*Multiplayer::Multiplayer {
    std::vector<PDGameV2> m_players;
    bool m_gameOver = false;
    void checkForWinner() {

    };
    void displayScoreboard() {

    };

    Multiplayer() {
        m_gameOver = false;
        int playerAmount = 0;
        std::string tempName;
        std::cout << "How many people are playing? ";
        std::cin >> playerAmount;
        std::cin.ignore();
        for (int i = 0; i < playerAmount; i++) {
            std::cout << "Enter player " << i + 1 << "'s name: ";
            std::getline (std::cin, tempName);
            m_players.emplace_back(tempName);
        }
    }

    void mpPlayGame() {
        m_players[0].displayRules();
        while (!m_gameOver) {
            for (int i = 0; i < m_players.size(); i++) {
                std::cout << "\n\n" << m_players[i].getPlayerName();
                m_players.at(i).playGame();
                displayScoreboard();
            }
            checkForWinner();
        }
    }
};
*/