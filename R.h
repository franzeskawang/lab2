#ifndef R_H
#define R_H
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
 
class R{

  public:

  int ans;  
  R();
  R(int r1_,int r2_);
  int now(); 
  int Ans(float s_);
 
  private:

  int r1,r2;
  float s;
  static const int k=32;
};
#endif

