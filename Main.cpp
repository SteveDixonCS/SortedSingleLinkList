//============================================================================
// Name        : test.cpp
// Author      :
// Version     :
// Description : Hello World in C++, Ansi-style
// Created on: Sep 24, 2018
//============================================================================
#include <iostream>
#include "SortedLinkedList.h"

int main( int argc, char* argv[])
{
#include <iostream>
#include <fstream>

SortedLinkedList list;
int input;
std::fstream fs;
fs.open(argv[1], std::fstream::in);
if(fs.is_open()) {
     fs >> input;
     while (!fs.eof()) {
          DataType data(input);
          list.insertItem(data);
          fs >> input;
     }// while

     std::cout<<
	"Commands:" << std::endl <<
	"(i)- insert value" << std::endl <<
	"(d)- delete value:" << std::endl <<
	"(s)- search value:" << std::endl <<
	"(n)- print next iterator value" << std::endl <<
	"(r)- reset iterator:" << std::endl <<
	"(p)- print list" << std::endl <<
	"(l)- print length" << std::endl <<
	"(b)- swap" << std::endl <<
	"(c)- clear list" << std::endl <<
	"(q)- quit program:" << std::endl <<
	std::endl <<
	"Enter a command: " << std::endl;

} else {
std::cout << "Failed to open the input file" << std::endl;
return 0;
}
}

