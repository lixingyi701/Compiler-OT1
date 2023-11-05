CC=g++

OBJ_DIR = ~/projects/OT1

SOURCE_CPP = main.cpp nfa.cpp
HEADER = nfa.h

OBJECTS = $(addprefix $(OBJ_DIR)/,$(notdir $(SOURCE_CPP:.cpp=.o)))

all: executable

executable: $(OBJECTS)
	$(CC) -o executable $^

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	$(CC) -c -o $@ $<

clean:
	rm -rf executable $(OBJECTS)