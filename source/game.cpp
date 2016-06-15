#include "game.hpp"
#include <unistd.h>
#include <iostream>

void Game::update() {
  std::cout << "default update" << std::endl;
}

void Game::draw() {}

void Game::run() {
  while (true) {
    update();
    draw();
    wait();
  }
}

void Game::wait() {
  sleep(1);
}
