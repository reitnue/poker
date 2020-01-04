CPP=g++
CPPFLAGS=-g3 -Wall

deck: card.o deck.o
	$(CPP) $(CPPFLAGS) -o $@ $^

card.o: card.hpp

deck.o: deck.hpp