#include <iostream>
#include <limits.h> //May end up not needing this statement.
#include "BST.h"

using namespace std;

/*int main() { //This is where I will instantiate different data structures and test their functionality

	return 0;
}*/

int main() {
	BSTNode* root;
	root = new BSTNode(5);
	cout << root->data;
	root->left = new BSTNode(3);
	cout << root->left->data;
	BSTNode* n1;
	n1 = new BSTNode(7);
	n1->insertNode(root);
	cout << root->right->data << endl;
	return 0;
}