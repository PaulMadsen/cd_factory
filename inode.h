#ifndef INODE_H
#define INODE_H
#include "node.h"
#include "rid.h"
class IndexNode : public Node{
	public:
	int keys[4];
	Node* children[5]; //non persistent way to store child nodes
	RID* RID_children[5]; //how I would like to store(and load from disk) child nodes
	IndexNode(){
		for (int i = 0; i < 5; ++i)
			RID_children[i] = new RID();
	}
	void insert(int key){
		//do work
	}
	void remove(int key,
			int currentLevel,
			Node* leftNeighbor, Node* rightNeighbor,
			Node* leftAnchor, Node* rightAnchor,
			int LeftAnchorLevel, int rightAnchorLevel){
		//do work.
	}

};

#endif
