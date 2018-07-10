// BinaryTree.h

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "BinaryTreeNode.h"

class BinaryTree {
	public:
		BinaryTree();
		BinaryTree(int arr[], int len);
		BinaryTree(const BinaryTree & other);
		BinaryTree & operator=(const BinaryTree & other);
		~BinaryTree();

		void addValue(int val);
		void removeValue(int val);

		void quicksort(int arr[], int low, int high);
		int partition(int arr[], int low, int high);
		void heapify(int a[], int i, int n);
		int heapSort(int list, int len);

		// int postOrder();
		// int preOrder();
		// int inOrder();

	private: 
	  BinaryTreeNode * mRoot;
		int mSize;
};

#endif