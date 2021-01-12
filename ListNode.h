//============================================================================
// Name        : ListNode.h
// Author      :
// Version     :
// Description : Hello World in C++, Ansi-style
// Created on: Sep 24, 2018
//============================================================================

#include "DataType.h"
#ifndef LISTNODE_H_
#define LISTNODE_H_

struct ListNode {

public:
	DataType item;
	ListNode *next;

	ListNode(DataType &item)
	{
		ListNode::item = item;
		ListNode::next = &item++ ;
	}
};

#endif /* LISTNODE_H_*/
