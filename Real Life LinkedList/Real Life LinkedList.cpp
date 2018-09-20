//// Real Life LinkedList.cpp : Defines the entry point for the console application.
////
//
//#include "stdafx.h"
//#include <malloc.h>
//struct Node
//{
//	int data;
//	Node *next;
//};
//
//void insert(Node **head, int val)
//{
//	Node* node = *head;
//	node->data = val;
//	*head = node;
//	if (node->next == 0)
//		node->data = val;
//	//Node* node = (Node*)malloc(sizeof(Node));
//	/*if (node == NULL)
//	{
//		printf("No sufficient memory");
//		return;
//	}
//	Node* current = *head;
//	if (*head == NULL)
//	{
//		node->data = val;
//		node->next = NULL;
//		*head = node;
//	}
//	else
//	{
//		node->data = val;
//		node->next = *head;
//		*head = node;
//	}*/
//}
//
//void createNodes(Node **head)
//{
//	for (int i = 0; i < 5;i++)
//	{
//		Node *node = (Node*)malloc(sizeof(Node));
//		node->data = 0;
//		node->next = *head;
//		printf("%d -->", node->data);
//	}
//}
//void printList(Node **head)
//{
//	Node * current = *head;
//	while (current != NULL)
//	{
//		printf("%d -->", current->next);
//		current = current->next;
//	}
//}
//int main()
//{
//	
//	Node *head;
//	createNodes(&head);
//	insert(&head, 10);
//    return 0;
//}
//

#include"stdafx.h"
#include <iostream>

using namespace std;
struct node {
	int value;
	node *next;
};

class LinkedList
{
	node *head;

public:
	LinkedList()
	{
		head = NULL;
	}

	void insert()
	{
		int val;
		node *pt;
		pt = head;
		cout << "\n Enter Node value to be inserted : " << endl;
		cin >> val;
		if (val == 0)
		{
			cout << "0 Cannot be inserted to list"<<endl;
			exit(0);
		}
		else
		{
			check();
			while (pt->value != 0)
			{
				pt = pt->next;
			}
			pt->value = val;

		}
	}


	void create()
	{
		int n = 5;
		node *pt;
		pt = head;
		node *st = NULL;

		for (int i = 1;i <= n;i++)
		{
			node *temp = new node;
			temp->value = 0;
			temp->next = st;
			st = temp;
		}
		if (head == NULL)
		{
			head = st;
		}
		else
		{

			while (pt->next != NULL)
			{
				pt = pt->next;
				// cout<<"hello";
			}
			pt->next = st;

		}
	}

	void display()
	{

		node *st = head;
		if (head == NULL)
		{
			cout << "List is already empty... " << endl;
		}
		else
		{
			while (st != NULL && st->value != 0)
			{
				cout  << st->value << "-->";
				st = st->next;
			}
			cout << "NULL"<<endl;
		}
	}

	void check()
	{
		int c = 1;
		node *ptr;
		ptr = head;
		while (ptr->value != 0)
		{
			ptr = ptr->next;
			c++;
		}
		if (c % 5 == 0)
		{
			create();
		}
	}


};

int main()
{
	LinkedList list;
	
	list.create();

	int choice = 0;
	do {

		cout << "Enter Choice \n 1. Insert \n 2. Display \n 0. Exit \n Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			list.insert();
			//list.display();
			break;
		case 2:
			list.display();
			break;
		case 0:
			exit(0);
		default:
			cout << "You Entered a Wrong Choice" << endl;
			//exit(0);
			break;
		}

	} while (choice);

	return 0;
}
