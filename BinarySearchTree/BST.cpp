#include <iostream>
#include "BST.h"
using namespace std;

BSTNode::BSTNode(int num) {
	data = num;
	this->left = NULL;
	this->right = NULL;
}

BSTNode::~BSTNode() { //Not sure whether or not I need to define this myself since class has pointers
}

void BSTNode::insertNode(BSTNode* parent) { //Inserting is done from the perspective of the node to be inserted.
	if (this->data <= parent->data) {
		parent->left = this;
	}
	parent->right = this;
}

void BSTNode::printInOrder(BSTNode* node) {
	if (node != NULL) {
		printInOrder(node->left);
		cout << node->data << " ";
		printInOrder(node->right);
	}
}


void BSTNode::printPreOrder(BSTNode* node) {
	if (node != NULL) {
		cout << node->data << " ";
		printInOrder(node->left);
		printInOrder(node->right);
	}
}


void BSTNode::printPostOrder(BSTNode* node) {
	if (node != NULL) {
		printInOrder(node->left);
		printInOrder(node->right);
		cout << node->data << " ";
	}
}

BSTNode* BSTNode::findValue(BSTNode* curNode, int searchValue) {
	if (curNode == NULL) { // We've ran off the tree (value not present)
		return NULL;
	} 
	else if (searchValue < curNode->data) { //Search left subtree
		return findValue(curNode->left, searchValue);
	}
	else if (searchValue > curNode->data) { //Search right subtree
		return findValue(curNode->right, searchValue);
	}
	else {
		return curNode; //Found value we're looking for
	}
}

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
