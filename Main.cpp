/*-----------------------------------------
//   C++ Primer Plus 课后习题 p654 15.8
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include <iostream>
#include <string>
#include "tvfm.h"   // only change to use_tv.cpp
#include <cmath> // or math.h, unix users may need -lm flag
#include "exc_mean.h"



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
  // 相互友元的设定

  longline(2);  //2
  double x, y, z;

  cout << "Enter two numbers: ";
  while (cin >> x >> y)
  {
    try {                  // start of try block
      z = hmean(x,y);
      cout << "Harmonic mean of " << x << " and " << y
        << " is " << z << endl;
      cout << "Geometric mean of " << x << " and " << y
        << " is " << gmean(x,y) << endl;
      cout << "Enter next set of numbers <q to quit>: ";
    }// end of try block
                    
    catch (Execp_logic & e) 
    {
      //cerr << e.what() << endl;
       e.Report();
      cout << "Sorry, you don't get to play any more.\n";
      break;
    }
    catch (invalid_argument  & e)    // start of catch block
    {
      cerr << e.what() << endl;
      cout << "Try again.\n";
      continue; 
    } // end of catch block
  }
  cout << "Bye!\n";
  //异常类的改写 不同异常的层次与catch 层次
  //派生类调用顺序


  longline();
  system("pause");
}