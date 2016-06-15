#ifndef GAME_HPP_
#define GAME_HPP_

class Game {
 public:
  virtual void update();
  virtual void draw();
  void run();

 private:
  void wait();
};

#endif
