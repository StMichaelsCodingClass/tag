tag: main.o
	g++ -o tag -std=c++11 main.o	

main.o: main.cpp
	g++ -c -std=c++11 main.cpp	

