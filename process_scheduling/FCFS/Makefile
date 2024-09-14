# Define the compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# The name of the executable
TARGET = FCFS_test

# List of source files
SRCS = FCFS_test.cpp FCFS.cpp Process.cpp

# List of object files (replace .cpp with .o)
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Rule to link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile the source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
