# include "writeFilein.h"

    writeFilein::writeFilein(){}

    void writeFilein::startwriteFile(){
  
    ofstream outFile("file.in",ios::out);

    if(!outFile) {
      cerr<<"err\n";
      exit(1);
    }

    outFile << "k\tr1\tr2\n";
    outFile << 32<<"\t"<<1613<<"\t"<<1609<<"\n";
    outFile << "sa\tsb\n";
    outFile << 0 <<"\t"<< (1-0)<<"\n";
    outFile << 0.5 <<"\t"<< (1-0.5)<<"\n"; 
    outFile << 0.5 <<"\t"<< (1-0.5)<<"\n";
    outFile << 0 <<"\t"<< (1-0)<<"\n";
    outFile << 0 <<"\t"<< (1-0)<<"\n";
    outFile << 0 <<"\t"<< (1-0)<<"\n";

    outFile.close();
  }
