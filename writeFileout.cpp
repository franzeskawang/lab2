# include "writeFileout.h"  
#include "R.h"
    writeFileout::writeFileout(){}
    void writeFileout::startwriteFile(){
    
    string headline1, headline2;
    int r1,r2,k;
    float pointa,pointb;
    ifstream inFile("file.in",ios::in);
    ofstream outFile("file.out",ios::out);

    if(!inFile){
      cerr<<"file.in fail";
      exit(1);
    } 
    if(!outFile){
      cerr<<"file.out fail";
      exit(1);
    }

    inFile.ignore(1, '\n');
    getline(inFile,headline1);
    inFile>>k>>r1>>r2;
    R ra(r1,r2);
    R rb(r2,r1);
    outFile<< ra.now()<<"\t"<< rb.now()<<"\n";
    inFile.ignore(1, '\n');
    getline(inFile,headline2);
    while(inFile>>pointa>>pointb){
    outFile<< ra.Ans(pointa)<<"\t"<< rb.Ans(pointb)<<"\n";
    }

    inFile.close();
    outFile.close();
  } 

    
   
