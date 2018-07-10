// BinaryTreeNode.cpp

#include <iostream>
#include "BinaryTreeNode.h"

using namespace std;

BinaryTreeNode::BinaryTreeNode(int v):
 mParent(nullptr), 	mLeft(nullptr), mRight(nullptr) {
	mData = v;
}

// int BinaryTreeNode::postOrder() {
// }