// C++ program to demonstrate:
// 1-- BinaryTrees
// 2-- 4 Recursive sorting algorithms
// 3-- Time Complexity (in comments)
// 4-- Tree Traversal

#include<iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
	int arr[] = {5, 74, 7, 2, 18, 32, 13, 42, 60};
	int n = sizeof(arr) / sizeof(arr[0]);

	BinaryTree * tree = new BinaryTree(arr, n);

	// cout << "postOrder: " << tree->postOrder() << endl;
	// cout << "preOrder: " << tree->preOrder() << endl;
	// cout << "inOrder: " << tree->inOrder() << endl;

	return 0;
}