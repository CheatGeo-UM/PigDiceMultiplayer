#ifndef PIGDICEMULTIPLAYER_PLAYERS_H
#define PIGDICEMULTIPLAYER_PLAYERS_H
#include <vector>
#include "PDGameV2.h"

class Multiplayer {
private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver = false;
public:
    Multiplayer();
    void mpPlayGame();
private:
    void checkForWinner();
    void displayScoreboard() const;
};

#endif //PIGDICEMULTIPLAYER_PLAYERS_H