#include <iostream>
#include "PDGameV2.h"


PDGameV2::PDGameV2(const std::string &playerName) {
    if (!playerName.empty()) {
        m_playerName = playerName;
    }
    else {
        int index = 1;
        m_playerName = "Anonymous Player " + std::to_string(index);
        index++;
    }
}

PDGameV2::~PDGameV2() {
    std::cout << "\nPDGameV2 object destroyed\n";
}

std::string PDGameV2::getPlayerName() const {
    return m_playerName;
}

void PDGameV2::playGame() {
    if (m_gameScore < 50) {
        m_myTurn.resetTurnOver();
        m_myTurn.resetScoreThisTurn();
    }
}

void PDGameV2::displayRules() {
    std::cout << "\nLet's Play Pig Dice!\n"
              << "\n* See which player will reach 50 points in the fewest turns."
              << "\n* Turn ends when you hold or roll a 1"
              << "\n* If you roll a 1, you lose all points for the turn."
              << "\n* If you hold, you save all points for the turn.";
}


/*PDGameV2() {
    std::string m_playerName;

}

    PDGameV2(const std::string &playerName) {
        if (!playerName.empty()) {
            m_playerName = playerName;
        }
        else {
            int index = 1;
            m_playerName = "Anonymous Player " + std::to_string(index);
            index++;
        }
    };*/

/*~PDGameV2() {
        std::cout << "\nPDGameV2 object destroyed\n";
    }*/

/*std::string getPlayerName() {
        return m_playerName;
    };*/

/*void PDGameV2::playGame() //override//{
        if (m_gameScore < 50) {
            m_myTurn.resetTurnOver();
            m_myTurn.resetScoreThisTurn();
        }
    };*/

/*void displayRules() {
        std::cout << "\nLet's Play Pig Dice!\n"
                  << "\n* See which player will reach 50 points in the fewest turns."
                  << "\n* Turn ends when you hold or roll a 1"
                  << "\n* If you roll a 1, you lose all points for the turn."
                  << "\n* If you hold, you save all points for the turn.";
    };

};*/
