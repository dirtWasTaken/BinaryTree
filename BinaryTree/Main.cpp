#include "Tree.h"

	/****************************************************************************************************
	There is no output so please debug through 
	****************************************************************************************************/
int main()
{
	Tree Tree;
	/****************************************************************************************************
	Insert function call with values as arguements to pushing into the tree
	****************************************************************************************************/
	Tree.insert(16);
	Tree.insert(1);
	Tree.insert(10);
	Tree.insert(12);
	Tree.insert(3);
	Tree.insert(2);
	Tree.insert(11);
	Tree.insert(4);
	Tree.insert(13);
	Tree.insert(8);
	Tree.insert(15);
	Tree.insert(14);
	Tree.insert(7);
	Tree.insert(17);
	Tree.insert(9);
	Tree.insert(5);
	Tree.insert(6);
	/****************************************************************************************************
	destroying the tree before closing the program 
	****************************************************************************************************/
	Tree.destroyTree();

	system("pause");
}