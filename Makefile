CXX= g++
CXXFLAGS= -std=c++11
DEBUG_FLAGS= -g3 -Wall -Werror -Wpedantic -DDEBUG
RELEASE_FLAGS= -o3 -DNDEBUG

TARGET= poker_hands
SOURCES= $(wildcard *.cpp)
OBJECTS= $(patsubst %.cpp, %.o, $(SOURCES))

release: CXXFLAGS += $(RELEASE_FLAGS)
release: $(TARGET)
debug: CXXFLAGS += $(DEBUG_FLAGS)
debug: $(TARGET)_debug

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(TARGET)_debug: $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

.PHONY: clean

clean:
	rm -f *.o $(TARGET)

