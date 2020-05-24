CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
INCLUDES = 
#-I./includes
#LFLAGS = -L../includes
SRCS = main.cpp Troop.cpp Weapon.cpp TroopsManager.cpp WeaponsManager.cpp
OBJS = $(SRCS:.cpp=.o)

EXEC = project

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

