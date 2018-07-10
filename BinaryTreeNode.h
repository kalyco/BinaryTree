// BinaryTreeNode.h

#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

class BinaryTreeNode
{
public:
  int mData;
  BinaryTreeNode * mParent;
  BinaryTreeNode * mLeft;
  BinaryTreeNode * mRight;

  BinaryTreeNode(int value);

  int postOrder(int v);
  int preOrder();
  int inOrder();
  int levelOrder();
};

#endif