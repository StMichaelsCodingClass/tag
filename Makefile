tag: main.o character.o area.o masterclass.o item.o interpret.o
	 g++ -Wall -g -o tag -std=c++11 main.o	character.o	area.o	masterclass.o	item.o interpret.o	

main.o: main.cpp
	 g++ -Wall -g -c -std=c++11 main.cpp							

character.o: character.cpp
	 g++ -Wall -g -c -std=c++11 character.cpp						

area.o: area.cpp
	 g++ -Wall -g -c -std=c++11 area.cpp				

masterclass.o: masterclass.cpp
	g++ -Wall -g -c -std=c++11 masterclass.cpp			

item.o: item.cpp
	g++ -Wall -g -c -std=c++11 item.cpp	

interpret.o: interpret.cpp
	g++ -c -std=c++11 interpret.cpp	

