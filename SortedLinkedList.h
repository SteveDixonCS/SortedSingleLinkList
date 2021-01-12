//============================================================================
// Name        : test.cpp
// Author      :
// Version     :
// Description : Hello World in C++, Ansi-style
// Created on: Sep 24, 2018
//============================================================================
#include "listNode.h"
#include "DataType.h"
#ifndef SORTEDLINKEDLIST_H_
#define SORTEDLINKEDLIST_H_

class SortedLinkedList {
public:

	SortedLinkedList();
	~SortedLinkedList();
	int length() const;
	void insertItem(DataType &item);
	void deleteItem(DataType &item);
	int searchItem(DataType &item);
	void clear();
	void swap();

private:
	int length = 0;
	int count;
	ListNode *head;
};

#endif /* SORTEDLINKEDLIST_H_ */
