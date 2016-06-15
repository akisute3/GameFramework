#include <iostream>
#include <stdint.h>

#include "game.hpp"

class MyGame : public Game {
  void update();
};

void MyGame::update() {
  std::cout << "overrided!" << std::endl;
}

int32_t main() {
  MyGame g;
  g.run();
}
