#include<string>
#include<iostream>
#include"arrays_strings.h"
#include"Node.h"
#include"linked_list.h"
using namespace std;

int main()
{
	//string str("WGGLDD");
	//cout << CompressString(str) << endl;
	Node *linklist = new Node(1);
	//linklist->appendToTail(2);
	//linklist->appendToTail(3);
	//linklist->appendToTail(2);
	//linklist->appendToTail(5);
	PrintLinklist(linklist);
	RemoveDuplicates(linklist);
	PrintLinklist(linklist);
	system("pause");
}