//============================================================================
// Name        : test.cpp
// Author      :
// Version     :
// Description : Hello World in C++, Ansi-style
// Created on: Sep 24, 2018
//============================================================================

#ifndef DATATYPE_H_
#define DATATYPE_H_

class DataType {

public:
	enum Comparison { GREATER, LESS, EQUAL };


	DataType(int value);
	Comparison compareTo(DataType &item);
 	int getValue() const;
 	//virtual ~DataType(int value);
private:
 	int value;
};

#endif /* DATATYPE_H_ */
