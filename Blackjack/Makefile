CXX = g++
CXXFLAGS = -std=c++11 -Wall -g
INCLUDES = 
#-I./includes
#LFLAGS = -L../includes
SRCS = blackjack.cpp Card.cpp Deck.cpp
OBJS = $(SRCS:.cpp=.o)

EXEC = blackjack

all: $(EXEC)
	@echo $(EXEC) has been compiled

$(EXEC): $(OBJS) 
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(EXEC) $(OBJS) 
# $(LFLAGS) at the end of above line

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) *.o *~ $(EXEC)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

