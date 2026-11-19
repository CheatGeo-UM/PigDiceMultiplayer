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
    try {
        Multiplayer game;
    }
    catch (std::exception& e) {
        std::cerr << "An error occured: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unknown error has occurred." << std::endl;
    }
    /* Because I handled/fixed all the errors I came across and heard about, I was unsure
    where to put these specifically within the program. I settled on putting them here,
    to catch (hopefully) exceptions that may happen. I currently have no throws in the program,
    so the catches are not meant for specific things, just in general exceptions I did not come across.
    */
    return 0;
}
