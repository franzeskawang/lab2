# include "R.h"

  R::R(){
    cerr<<"no data to calculate";
  }


  R::R(int r1_,int r2_){
    r1=r1_;
    r2=r2_;
  }

  int R::now(){
    ans=r1;
    return ans;
  }

  int R::Ans(float s_){
    if (s_==1||s_==0||s_==0.5){
    s=s_;
    }
    else{
    cerr<<"need to be 1 0.5 0";
    exit(1);
    }
    r1=r1+k*(s-(1/(1+pow(10,((r2 - r1)/400)))));
   
    ans=r1;
    return ans;
  }
