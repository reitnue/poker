CPP=g++
CPPFLAGS=-g3 -Wall

game: card.o deck.o war.o game.o
	$(CPP) $(CPPFLAGS) -o $@ $^

card.o: card.hpp

deck.o: deck.hpp card.hpp

war.o: war.hpp deck.hpp card.hpp

game.o: deck.hpp war.hpp

