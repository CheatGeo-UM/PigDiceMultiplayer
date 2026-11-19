#include <iostream>
#include "PDGameV2.h"


PDGameV2::PDGameV2(const std::string &playerName) {
    static int index = 1;
    if (!playerName.empty()) {
        m_playerName = playerName;
    }
    else {
        m_playerName = "Anonymous Player " + std::to_string(index);
        index++;
    }
}

PDGameV2::~PDGameV2() {
    //std::cout << "\nPDGameV2 object destroyed\n";
}

std::string PDGameV2::getPlayerName() const {
    return m_playerName;
}

void PDGameV2::playGame() {
    PDGame::playGame();
    if (m_gameScore < 50) {
        m_myTurn.resetTurnOver();
        m_myTurn.resetScoreThisTurn();
    }
}

void PDGameV2::displayRules() {
    std::cout << "\nLet's Play Pig Dice!\n"
              << "\n* See which player will reach 50 points in the fewest turns."
              << "\n* Turn ends when you hold or roll a 1."
              << "\n* If you roll a 1, you lose all points for the turn."
              << "\n* If you hold, you save all points for the turn.";
}