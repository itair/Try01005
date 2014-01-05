//GobalFuc.h //模版重载 与 显示声明  //全局函数

#ifndef TRY0101_TRY0101_GOBLALFUN_H
#define TRY0101_TRY0101_GOBLALFUN_H
#include "exc_mean.h"
#include <stdexcept>
#include <string>

 void showtitle(void);
 
 double hmean(double a, double b) throw(std::exception);
 double gmean(double a, double b) throw(std::exception);

 class Execp_logic: public std::logic_error {
 public:
   Execp_logic(double x, double y, const std::string & _Message)
  :std::logic_error( _Message) {
    a = x; b =y;
}
   double Val_a() const;  
   double Val_b() const;
   void Report() const;
 private:
   double a;
   double b;
   
 }; 

#endif //TRY0101_TRY0101_GOBLALFUN_H