tag: main.o character.o area.o
	 g++ -Wall -g -o tag -std=c++11 main.o	character.o	area.o	

main.o: main.cpp
	 g++ -Wall -g -c -std=c++11 main.cpp				

character.o: character.cpp
	 g++ -Wall -g -c -std=c++11 character.cpp			


area.o: area.cpp
	 g++ -Wall -g -c -std=c++11 area.cpp	

