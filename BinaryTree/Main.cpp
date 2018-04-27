#include "Tree.h"

int main()
{
	Tree Tree;

	Tree.insert(1);
	Tree.insert(3);
	Tree.insert(4);
	Tree.insert(12);
	Tree.insert(24);
	Tree.insert(64);
	Tree.insert(76);
	Tree.insert(45);

	Tree.destroyTree();
}