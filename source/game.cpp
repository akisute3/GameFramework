#include "game.hpp"

const uint32_t Game::kDefaultFps = 60;

void Game::update() {
  std::cout << "default update" << std::endl;
}

void Game::draw() {}

void Game::run() {
  frame_timer_ = std::chrono::system_clock::now();
  frame_count_ = 1;
  while (true) {
    update();
    draw();
    wait();
  }
}

void Game::wait() {
  using namespace std::chrono;
  auto now = system_clock::now();
  double wait_ms = ((double)frame_count_ * 1000 / fps_) - duration_cast<milliseconds>(now - frame_timer_).count();

  std::cout << duration_cast<milliseconds>(now - frame_timer_).count() << std::endl;
  usleep(wait_ms * 1000);
  frame_count_++;
}
