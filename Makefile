CPP=g++
CPPFLAGS=-g3 -Wall

card: card.o
	$(CPP) $(CPPFLAGS) -o $@ $^
