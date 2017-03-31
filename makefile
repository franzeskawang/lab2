main: writeFilein.o writeFileout.o main.o R.o writeFilein.h writeFileout.h R.h
	g++ -o main writeFilein.o writeFileout.o main.o R.o

main.o: main.cpp writeFilein.h writeFileout.h R.h
	g++ -c main.cpp

writeFilein.o: writeFilein.cpp writeFilein.h
	g++ -c writeFilein.cpp
  
writeFileout.o: writeFileout.cpp writeFileout.h R.h
	g++ -c writeFileout.cpp 

R.o: R.cpp R.h
	g++ -c R.cpp
clean:
	rm main *.o
test:test.o R.o
	g++ -o test.o R.o
test.o:test.cpp R.h
	g++ -o test.cpp
	
	 
