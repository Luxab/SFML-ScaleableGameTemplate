//  Created by Duncan Klug on 4/6/17.

#include "game.h"

//Globals
int resW = 960;
int resH = 540;

int main()
{
  Game g(resW,resH);
  g.play();
  // Thread playThread(&TicTacToe::play,&t);
  // playThread.launch();
  // Thread exitThread(&TicTacToe::checkExit,&t);
  // exitThread.launch();
  return 1;
}
