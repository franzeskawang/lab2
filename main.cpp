# ifndef MAIN_H
# define MAIN_H
# include <iostream>
# include "R.h"
# include "writeFilein.h"
# include "writeFileout.h"
using namespace std;

int main(void){

  writeFilein filein;
  writeFileout fileout;

  filein.startwriteFile();
  fileout.startwriteFile();

  return 0;
}

#endif

