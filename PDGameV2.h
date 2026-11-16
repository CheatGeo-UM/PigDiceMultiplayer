#ifndef PIGDICEMULTIPLAYER_PIGDICEMULTIPLAYER_H
#define PIGDICEMULTIPLAYER_PIGDICEMULTIPLAYER_H
#include <string>
#include "PDGame.h"

class PDGameV2:public PDGame {
private:
    std::string m_playerName;
public:
    explicit PDGameV2(const std::string &playerName);
    virtual ~PDGameV2();
    std::string getPlayerName() const;
    void playGame() override;
    static void displayRules();
};



#endif //PIGDICEMULTIPLAYER_PIGDICEMULTIPLAYER_H