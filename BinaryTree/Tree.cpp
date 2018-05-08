#include "Tree.h"


/****************************************************************************************************

****************************************************************************************************/
Tree::Tree()
{
	root = NULL;
}

/****************************************************************************************************

****************************************************************************************************/
Tree::~Tree()
{
	destroyTree();
}
/****************************************************************************************************
node definition 
****************************************************************************************************/
struct Node
{
	int key_value;
	Node *left;
	Node *right;
};
/****************************************************************************************************
the private insert function balances the tree accoding to the key value that comes before the value being inserted,
anything lower goes to the left, anything higher goes to the right  
****************************************************************************************************/
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
 /****************************************************************************************************
	
 ****************************************************************************************************/
 void Tree::printTree()
 {
	 Node * printptr = root;
	 while (printptr != NULL)
	 {
		 
		std::cout << printptr->key_value << "\n\n";
		printptr = printptr->left;
	 }
	 std::cout << "\n\n";
 }
 /****************************************************************************************************
 destroyed the tree
 ****************************************************************************************************/
void Tree::destroyTree(Node *leaf)
{
	if (leaf != NULL)
	{
		destroyTree(leaf->left);
		destroyTree(leaf->right);
	}
}
/****************************************************************************************************
function that checks if the value is the first to be inserted, if so it makes the root pointer into 
a new node and assigns the value to it otherwisesequential values after the initial value will be put
through the second private function of insert to balance it based upon the initial value
****************************************************************************************************/
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
/****************************************************************************************************
destroy function 
****************************************************************************************************/
void Tree::destroyTree()
{
	destroyTree(root);
}