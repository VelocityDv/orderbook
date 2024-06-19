# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -pthread -Iinclude -Isrc

# Paths
INCLUDE_DIR = include
OBJ_DIR = obj

# Target executable
TARGET = main

# Source files
SRC_FILES := $(wildcard $(INCLUDE_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(INCLUDE_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files to object files
$(OBJ_DIR)/%.o: $(INCLUDE_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create object directory
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean target
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

# Phony targets
.PHONY: all clean
