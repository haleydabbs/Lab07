#include "myLib.h"
// TODO 2.0
// TODO 4.0

// Prototypes
void initialize();
void game();

// Button Variables
unsigned short buttons;
unsigned short oldButtons;

// Horizontal Offset
unsigned short hOff;


int main() {

    initialize();

    while(1) {

        game();

        oldButtons = buttons;
        buttons = BUTTONS;
	}
}

// Initialize the game on first launch
void initialize() {



    // TODO 2.1 - set up display control register
    // TODO 4.1 - edit display control register to enable bg 0


    // TODO 2.2 - load tile palette


    // TODO 2.3 - set up bg 1 control register

    // TODO 2.4 - load furtherTrees tiles to charblock

    // TODO 2.5 - load furtherTrees map to screenblock


    // TODO 4.2 - set up bg 0 control register

    // TODO 4.3 - load trees tiles to charblock

    // TODO 4.4 - load trees map to screenblock

    
    hOff = 0;

    buttons = BUTTONS;
}

// Update game each frame
void game() {

    // Scroll the background
    if(BUTTON_HELD(BUTTON_LEFT)) {
        hOff--;
    }
    if(BUTTON_HELD(BUTTON_RIGHT)) {
        hOff++;
    }

    waitForVBlank();

    // Update the offset registers with the actual offsets

    // TODO 5.0 - change to implement parallax
    REG_BG0HOFF = hOff;
    REG_BG1HOFF = hOff;
}