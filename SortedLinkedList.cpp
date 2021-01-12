//============================================================================
// Name        : test.cpp
// Author      :
// Version     :
// Description : Hello World in C++, Ansi-style
// Created on: Sep 24, 2018
//============================================================================


#include "SortedLinkedList.h"
#include "DataType.h"
#include "listNode.h"

SortedLinkedList::SortedLinkedList()
{
	ListNode list;
	head = list;
	count = -1;
}

SortedLinkedList::~SortedLinkedList()
{

}

int length()
{
	return length;
}

void insertItem(DataType &item)
{
	if(length != 0)
	{
		bool moreToSearch;
		int location = 0;

		moreToSearch = (location < length);

		while(moreToSearch)
		{
			switch(SortedLinkedList::head->item.compareTo(item))
			{
				case DataType::LESS:
					moreToSearch = false;
					break;
				case DataType::GREATER:
					location++;
					moreToSearch = (location < length);
					break;
			}
		}
		for (int index = length; index > location; index--)
		{
			item = item - 1;
		}
		item + location = item;
		length++;
	}
	else if (length == 0)
	{
		SortedLinkedList::head = &item;
		ListNode::ListNode(item);
	}
}

void deleteItem(DataType &item)
{

}

int searchItem(DataType &item)
{
 return -1;
}

void clear()
{

}

void swap()
{

}
