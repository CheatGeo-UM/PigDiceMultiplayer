#include <iostream>
#include "DIE.h"
#include "Multiplayer.h"
#include "PDGame.h"
#include "PDGameV2.h"

struct GameState {
    char choice;
    int turn_count = 0;
    int game_score = 0;
    int score_this_turn = 0;
    bool game_over = false;
    bool turn_over = false;
};

int main() {
    //PDGame game;
    Multiplayer game;


    return 0;
}
