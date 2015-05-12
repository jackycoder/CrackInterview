#pragma once
#include <cstddef>
#include <iostream>
#include "Node.h"
using namespace std;

class Stack
{
public:
	Stack(void);
	int pop();
	size_t get_length();
	void push(int data);
	~Stack(void);
private:
	Node *m_top;
	size_t m_length;
};
