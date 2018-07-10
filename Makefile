CC=g++
CFLAGS=-std=c++0x -g
SRCS=main.cpp BinaryTree.cpp BinaryTreeNode.cpp
EXEC=BinaryTree

all: $(SOURCES)
	$(CC) $(CFLAGS) $(SRCS) -o $(EXEC)

clean: 
	rm BinaryTree *~ 
