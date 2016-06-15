#ifndef GAME_HPP_
#define GAME_HPP_

#include <iostream>
#include <stdint.h>
#include <unistd.h>
#include <chrono>

class Game {
 public:
  static const uint32_t kDefaultFps;
  Game() : fps_(kDefaultFps) {}

  virtual void update();
  virtual void draw();
  void run();

  uint32_t fps() const { return fps_; }
  void set_fps(uint32_t fps) { fps_ = fps; }

 private:
  uint32_t fps_;
  std::chrono::system_clock::time_point frame_timer_;
  uint32_t frame_count_;
  void wait();
};

#endif
