CC = g++
CFLAGS = -I. -Wall

SRCS = main.cpp calculator.cpp
OBJS = $(SRCS:.cpp=.o)

EXEC = calculator

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(EXEC)
