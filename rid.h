//this class is to act as storage, factory and save mechanism for nodes.
//RID stands for reference ID
#ifndef RID_H
#define RID_H
#include "inode.h"
#include "dnode.h"

class IndexNode; //attempted forward declaration

class RID{
private:
	Node* node;
	int ref_id; //an offset used to find location on disk
public:
	RID() : node(nullptr), ref_id(0){}
	Node* operator->(){
		if (node == nullptr)
			//load from disk.  This is the factory part.
		//the following two lines should cause circular dependency
		Node* tmp = new DataNode();
		Node* tmp2 = new IndexNode();
		return node;
	}
	~RID(){
		//save node when this RID falls out of scope
	}

};

#endif
