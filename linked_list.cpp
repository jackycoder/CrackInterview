#include"linked_list.h"

void RemoveDuplicates(Node *link_list)
{
	if(link_list == NULL) return;
	Node * previous = link_list->next;
	Node * follow = link_list;
	hash_map<int,bool> hashMap;
	while(previous != NULL)
	{
		if(!hashMap.count(previous->data)){
			hashMap.insert(pair<int,bool>(previous->data,true));
			follow = follow->next;
		}else{
			follow->next = previous->next;			
		}
		previous = previous->next;
	}
}

void Partition(Node *linked_list, int data)
{
	if(linked_list == NULL)
		return ;
	Node * less_start = NULL;
	Node * greater_start = NULL;
	Node * 

}

void PrintLinklist(Node *head)
{
	while(head != NULL )
	{
		cout << head->data;
		head=head->next;
		if(head != NULL)
			cout << "-->";
	}
	cout << endl;
}