#include "rid.h"
#include "inode.h"

Node *RID::operator->()
{
	if (node == nullptr){
		//load from disk.  This is the factory part.
		//the following two lines should cause circular dependency
	}
	Node* tmp = new DataNode();
	Node* tmp2 = new IndexNode();
	return node;
}
