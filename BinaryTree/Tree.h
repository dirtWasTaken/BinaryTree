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



	Node *search(int key)
	{
		return search(key, root);
	}

	void insert(int key);

	void destroyTree();

	//void printRightTree();

	//void printLeftTree();

private:

	Node *search(int key, Node *leaf)
	{
		if (leaf != NULL)
		{
			if (key == leaf->key_value)
				return leaf;
			if (key<leaf->key_value)
				return search(key, leaf->left);
			else
				return search(key, leaf->right);
		}
		else return leaf = NULL;
	}

	void destroyTree(Node *leaf);

	void insert(int key, Node *leaf);


	Node *root;

};

