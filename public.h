#pragma once
#include<iostream>
using std::cout;
using std::endl;

#define LOG(str)\
	cout<<__FILE__<<":"<<__LINE__<<" "<<__TIMESTAMP__<<":"<<str<<endl;
