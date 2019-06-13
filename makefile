OBJS = prog.o DynIntQueue.o
CC = g++
PROG = prog

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
prog.o:  DynIntQueue.h
	$(CC) -c prog.cc
DynIntQueue.o: DynIntQueue.h
	$(CC) -c DynIntQueue.cc
clean:
	rm $(PROG) $(OBJS)

