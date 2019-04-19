IDIR =../Include
CC=g++ -std=c++11 -Wall
CFLAGS=-I$(IDIR)

ODIR=Obj

_DEPS = romano.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = romano.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

romano: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
