//GobalFuc.h //模版重载 与 显示声明  //全局函数

#ifndef TRY0101_TRY0101_GOBLALFUN_H
#define TRY0101_TRY0101_GOBLALFUN_H
#include "exc_mean.h"
#include <stdexcept>

 void showtitle(void);
 
 double hmean(double a, double b) throw(std::exception);
 double gmean(double a, double b) throw(std::exception);

//  class Execp_logic: public std::logic_error {
//  public:
//    double Val_a() const;
//    double Val_b() const;
//    void Repor() const { cout << a << b << name(); }
//  private:
//    double a;
//    double b;
// 
//  }; 

#endif //TRY0101_TRY0101_GOBLALFUN_H