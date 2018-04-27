#pragma once
#include <iostream>

class Tree
{
public:

	Tree();

	virtual ~Tree();

	/*****************************************************************************************
	Node definition for the binary tree
	******************************************************************************************/
	struct Node
	{
		int key_value;
		Node *left;
		Node *right;
	};

	void insert(int key);

	void destroyTree();

	void *search(int key);

private:

	void destroyTree(Node *leaf);

	void insert(int key, Node *leaf);

	void *search(int key, Node *leaf);

	Node *root;

};

