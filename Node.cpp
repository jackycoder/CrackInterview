#include "Node.h"

Node::Node(int d)
{
	data = d;
	next = NULL;
}

void Node::appendToTail(int d)
{
	Node *end = new Node(d);
	Node *n = this;
	while(n->next != NULL)
	{
		n = n->next;
	}
	n->next = end;
}

Node* Node::deleteNode(Node *head ,int d)
{
	Node *n = head;
	if(n->data = d)
		return head->next;

	while(n->next != NULL)
	{
		if(n->next->data == d)
		{
			n->next = n->next->next;
			return head;
		}
		n= n->next;
	}
	return head;
}

void Node::set_data(int a)
{
	data = a;
}

Node::~Node(void)
{
}