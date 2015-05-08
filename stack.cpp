#include "stack.h"

Stack::Stack(void)
{
	m_length = 0;
}

int Stack::pop()
{
	if(0 != get_length())
	{
		m_top = m_top->next;		
		m_length--;
		return m_top->data;
	}
	return NULL;
}

void Stack::push(int data)
{
	Node *new_node = new Node(data);
	new_node->next = m_top;
	m_top = new_node;
	m_length++;
}

size_t Stack::get_length()
{
	return m_length;
}

Stack::~Stack(void)
{
	
}
