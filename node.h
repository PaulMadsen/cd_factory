#ifndef NODE_H
#define NODE_H
class Node{
	public:
	virtual void insert(int key) = 0;
	virtual void remove(int key, 
			int currentLevel,
			Node* leftNeighbor, Node* rightNeighbor,
			Node* leftAnchor, Node* rightAnchor,
			int LeftAnchorLevel, int rightAnchorLevel) = 0;

};

#endif
