/*-----------------------------------------
//   C++ Primer Plus ¿ÎºóÏ°Ìâ p654 15.8
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include <iostream>
#include <string>
#include "tvfm.h"   // only change to use_tv.cpp

using namespace std;

void main()
{
  showtitle();
  longline();

  longline(1); //1  
  using std::cout;
  Tv s27;
  cout << "Initial settings for 27\" TV:\n";
  s27.settings();
  s27.onoff();
  s27.chanup();
  cout << "\nAdjusted settings for 27\" TV:\n";
  s27.settings();

  Remote grey;
  grey.set_chan(s27, 10);
  grey.volup(s27);
  grey.volup(s27);
  cout << "\n27\" settings after using remote:\n";
  s27.settings();

  Tv s32(Tv::On);
  s32.set_mode();
  grey.set_chan(s32,28);
  cout << "\n32\" settings:\n";
  s32.settings();







  longline();
  system("pause");
}