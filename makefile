CXX = clang++
CXXFLAGS = -std=c++17 -Wall -g $(shell pkg-config --cflags glfw3)
LDFLAGS = $(shell pkg-config --libs glfw3) -framework OpenGL

SRC = src/main.cpp src/input.cpp
BUILD = build/leaf-skitter


all:
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BUILD) $(LDFLAGS)

run: all
	./$(BUILD)

clean:
	rm -f $(BUILD)
