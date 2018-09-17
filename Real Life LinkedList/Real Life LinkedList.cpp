// Real Life LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <malloc.h>
struct Node
{
	int data;
	Node *next;
};

void insert(Node **head, int val)
{
	Node* node = *head;
	//Node* node = (Node*)malloc(sizeof(Node));
	if (node == NULL)
	{
		printf("No sufficient memory");
		return;
	}
	Node* current = *head;
	if (*head == NULL)
	{
		node->data = val;
		node->next = NULL;
		*head = node;
	}
	else
	{
		node->data = val;
		node->next = *head;
		*head = node;
	}
}

void createNodes(Node **head)
{
	for (int i = 0; i < 5;i++)
	{
		Node *node = (Node*)malloc(sizeof(Node));
		node->data = 0;
		node->next = *head;
		printf("%d -->", node);
	}
}
void printList(Node **head)
{
	Node * current = *head;
	while (current != NULL)
	{
		printf("%d -->", current->next);
		current = current->next;
	}
}
int main()
{
	
	Node *head;
	createNodes(&head);

    return 0;
}

