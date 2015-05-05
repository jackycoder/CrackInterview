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

Node * Partition(Node *linked_list, int data)
{
	if(linked_list == NULL)
		return NULL;
	Node * head = linked_list;
	Node * less_start = NULL;
	Node * less_end= NULL;
	Node * greater_start = NULL;
	Node * greater_end=NULL;
	while(head != NULL)
	{
		Node * new_node = new Node(head->data);
		if(head->data < data){
			if(less_start != NULL){
				less_end->next = new_node;
				less_end = new_node;
			}else{
				less_start = new_node;
				less_end = new_node;
			}
		}else {
			if(greater_start != NULL){
				greater_end->next = new_node;
				greater_end = new_node;
			}else{
				greater_start = new_node;
				greater_end = new_node;
			}
		}
		head = head->next;
	}
	return MergeLinklist(less_start,greater_start);
}

Node* MergeLinklist(Node *front_list , Node *behind_list)
{
	Node *head = front_list;
	while(head->next != NULL)
	{
		head = head->next;
	}
	head->next = behind_list;
	return front_list;
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