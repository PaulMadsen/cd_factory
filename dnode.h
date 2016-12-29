#ifndef DNODE_H
#define DNODE_H
#include "node.h"
#include <utility>

class DataNode : public Node{
public:
	std::pair<int, int> data[5];
	DataNode(){
		for (int i = 0; i < 5; ++i)
			data[i].first = data[i].second = 0;
	}
	void insert(int key){};
	void remove(int key,
			int currentLevel,
			Node* leftNeighbor, Node* rightNeighbor,
			Node* leftAnchor, Node* rightAnchor,
			int LeftAnchorLevel, int rightAnchorLevel){
		//do some work.
		//the anchor node pointers will always refer to nodes of type IndexNode.
		//this coupling is inherent
	}
};


#endif
