//============================================================================
// Name        : test.cpp
// Author      :
// Version     :
// Description : Hello World in C++, Ansi-style
// Created on: Sep 24, 2018
//============================================================================

#include "DataType.h"
#include <iostream>



DataType::DataType(int MyValue)
{
	DataType::value = MyValue;
}

DataType::Comparison compareTo(DataType &item)
{
	if(DataType::value > &item.value)
	{
		return DataType::Comparison::GREATER;
	}

	else if(DataType::value < &item.value)
	{
		return DataType::Comparison::LESS;
	}

	else if(DataType::value == &item.value)
	{
		return DataType::Comparison::EQUAL;
	}
	else
	{
		std::cout << "ERROR IN COMPARISON: COULD NOT EVALUATE";
	}
}

int getValue()
{
	return DataType::value;
}
DataType::~DataType() {
	// TODO Auto-generated destructor stub
}

