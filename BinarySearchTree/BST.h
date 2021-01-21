#ifndef BST_H
#define BST_H

class BSTNode {
public:
	BSTNode(int);
	~BSTNode(); //Destructors cannot be overloaded in C++. We need a user-defined destructor when a class contains a pointer to memory allocated in class. Destructor releases memory before the class instance is destroyed. Must be done to avoid a memory leak. 
	void insertNode(BSTNode*);
	void printInOrder(BSTNode*);
	void printPreOrder(BSTNode*);
	void printPostOrder(BSTNode*);
	BSTNode* findValue(BSTNode* curNode, int searchValue);

	int data;
	BSTNode* left;
	BSTNode* right;
};

#endif