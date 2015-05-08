#include <string>
#include <iostream>
#include "arrays_strings.h"
#include "node.h"
#include "linked_list.h"
#include "stack.h"
using namespace std;

int main()
{
	//string str("WGGLDD");
	//cout << CompressString(str) << endl;
	//Node *linklist = new Node(1);
	//linklist->appendToTail(10);
	//linklist->appendToTail(3);
	//linklist->appendToTail(2);
	//linklist->appendToTail(5);
	//linklist->appendToTail(9);
	//linklist->appendToTail(5);
	//linklist->appendToTail(4);
	//linklist->appendToTail(0);
	//PrintLinklist(linklist);
	//
	//RemoveDuplicates(linklist);

	//PrintLinklist(Partition(linklist,5));

	Stack *my_stack = new Stack;
	for(size_t i = 0;i<100;i++)
	{
		my_stack->push(i);
	}	

	for(size_t i = 0;i<10;i++)
	{
		my_stack->pop();
	}
	cout << my_stack->get_length() << endl;

	system("pause");
}