// BinaryTree.cpp

#include<iostream>
#include<algorithm>
#include "BinaryTree.h"

using namespace std;

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

BinaryTree::BinaryTree() : mRoot(nullptr), mSize(0) {}

BinaryTree::BinaryTree(int arr[], int len) {
	int sortedVals;
	quicksort(arr, 0, len);
	cout << "sorted vals: " << endl;
	for(int i =0; i < len; i++) {
		cout << arr[i] << " ";
		// addValue(vals[i]);
	}
	cout << endl;
}

/* Quick sort:
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index
Should be done in max 0(n) */
void BinaryTree::quicksort(int arr[], int low, int high) {
	if (low < high) { // low --> starting index, high --> ending index
		int pi = partition(arr, low, high); // pi == partitioning index. arr[pi] is now at right place
		// Separately sort elements before partition and after partition.
		quicksort(arr, low, pi - 1);
		quicksort(arr, pi + 1, high);
	}
	return;
}

/* Partition: this function takes last element as pivot,
   places the pivot element at its correct position in 
   sorted array, and places all smaller to left of pivot
   and all greater to the right of pivot */
int BinaryTree::partition(int arr[], int low, int high) {
	int pivot = arr[high]; // pivot (Element to be placed at right position)
	int i = (low - 1); // Index of smaller element

	for (int j=low; j<= (high -1); j++) {
		if (arr[j] <= pivot) {
			i++; // increment index of smaller element
      swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void BinaryTree::addValue(int val) {
}




// Heap Sort: Improved Selection Sort
// The time complexity is O(n*log(n)).
// First find minimum element and place
// at the end. Repeat for remaining elements.
int BinaryTree::heapSort(int list, int len) {
		if (len == 1) return list;
		int list2 = heapSort(list, len - 1);
		return list2;
}
