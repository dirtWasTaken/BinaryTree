#include "Tree.h"



Tree::Tree()
{
	root = NULL;
}


Tree::~Tree()
{
	destroyTree();
}

struct Node
{
	int key_value;
	Node *left;
	Node *right;
};

 void Tree::insert(int key, Node *leaf)
{
	if (key< leaf->key_value)
	{
		if (leaf->left != NULL)
			insert(key, leaf->left);
		else
		{
			leaf->left = new Node;
			leaf->left->key_value = key;
			leaf->left->left = NULL;    //Sets the left child of the child node to null
			leaf->left->right = NULL;   //Sets the right child of the child node to null
		}
	}
	else if (key >= leaf->key_value)
	{
		if (leaf->right != NULL)
			insert(key, leaf->right);
		else
		{
			leaf->right = new Node;
			leaf->right->key_value = key;
			leaf->right->left = NULL;  //Sets the left child of the child node to null
			leaf->right->right = NULL; //Sets the right child of the child node to null
		}
	}
}

 //void Tree::printRightTree()
 //{
	// Node * printRight = root;
	// while (printRight != NULL)
	// {
	//	 std::cout << printRight->key_value << "\n\n";
	//	 std::cout << printRight->left->key_value << "\n\n";
	//	 std::cout << printRight->right->key_value << "\n\n";
	//	 printRight = printRight->right;
	// }
	// std::cout << "\n\n";
 //}

// void Tree::printLeftTree()
// {
//	 Node * printLeft = root;
//	 while (printLeft != NULL)
//	 {
//		 std::cout << printLeft->key_value << "\n\n";
//		 std::cout << printLeft->left->key_value << "\n\n";
//		 std::cout << printLeft->right->key_value << "\n\n";
//		 printLeft = printLeft->left;
//	 }
//	 std::cout << "\n\n";
// }
//
void Tree::destroyTree(Node *leaf)
{
	if (leaf != NULL)
	{
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
	}
}

void Tree::insert(int key)
{
	if (root != NULL)
	{
		insert(key, root);
	}
	else
	{
		root = new Node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

void Tree::destroyTree()
{
	destroyTree(root);
}