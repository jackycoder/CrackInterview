/*****************************************************
 * File name:Node.h
 * Description:This is node for creating linklist
 *
 * Date:2015/04/23
 * Author: Wang
 *****************************************************/
#pragma once
#include<stddef.h>

class Node
{
public:
	Node *next;
	int data;
public:
	Node(void){}
	Node(int d);
	~Node(void);
	void appendToTail(int d);
	Node* deleteNode(Node *head,int d);
	void set_data(int);
};
