 //全局方法实现  Gobalfuc.cppp

#include "GobalFuc.h"
#include <iostream>

 void showtitle(void) { 
  using namespace std;
  cout<< "------------------------\n" 
    << "-  C++ Primer Plus    -\n" 
    << "-     by itAir        -\n"
    << "        &             -\n"     
    << "-  Hello World!       -\n";
}


 double hmean(double a, double b) throw(std::exception)
 {
   if (a == -b)
     throw std::invalid_argument (" a+b=0 ") ;
   return 2.0 * a * b / (a + b);
 }

 double gmean(double a, double b) throw(Execp_logic)
 {
   if (a < 0 || b < 0)
     throw Execp_logic(a, b, "out_of_range");
   return std::sqrt(a * b); 
 }
 
 double Execp_logic::Val_a() const {
   return a;
 }

 double Execp_logic::Val_b() const {
   return b;
 }

void Execp_logic::Report() const {
  std::cout << "a= " << a << "\nb= " << b << std::endl 
            << what() << std::endl;       

}