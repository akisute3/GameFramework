#ifndef __GAME_HPP_INCLUDED
#define __GAME_HPP_INCLUDED

class Game {
 public:
  virtual void update();
  virtual void draw();
  void run();

 private:
  void wait();
};

#endif
