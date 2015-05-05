/*****************************************************
 * File name:linked_list.h
 * Description:Cracking the interview , part of Linked Lists
 *
 * Date:2015/04/23
 * Author: Wang
 *****************************************************/
#ifndef _LINKED_LISTS_H__
#define _LINKED_LISTS_H__
#include<hash_map>
#include<iostream>
#include"Node.h"
using namespace std;
using namespace stdext;

/*
 * Description: Remove duplicates from an unsorted linked list.
 * Answer1: Use data structure HashMap.
 */
void RemoveDuplicates(Node *linked_list);

/*
 * Description: Print the linklist.
 */
void PrintLinklist(Node *head);

/*
 * Description: Partition the linked_list by data
 * Answer1: Create 2 linked_list to store 
 *          greater and less than data
 */
Node* Partition(Node *linked_list, int data);

/*
 * Description: Merge 2 linked_lists
 */
Node * MergeLinklist(Node *front_list , Node *behind_list);

#endif