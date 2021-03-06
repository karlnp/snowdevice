#include <BearLibTerminal.h>
#include "engine.h"

int main() {
    terminal_open();
    terminal_set
      (
        "input:"
          "cursor-symbol = 0x1F,"
          "cursor-blink-rate = 500,"
          "precise-mouse = false,"
          "mouse-cursor = true,"
          "filter=[];"
          "output:"
          "vsync = false"
      );
    terminal_composition(TK_OFF);
    Engine::getInstance().run();
    return 0;
}