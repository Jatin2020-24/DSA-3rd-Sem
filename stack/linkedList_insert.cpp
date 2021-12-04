#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		cout<<"The given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

void append(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	Node *last = *head_ref; 

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return;
}

void deleteNode(Node** head_ref, int key)
{
	
	Node* temp = *head_ref;
	Node* prev = NULL;
	
	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		delete temp;
		return;
	}

	else
	{
	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return;

	prev->next = temp->next;

	delete temp;
	}
}

void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	
    cout<<"Insert head element:\n";
	append(&head, 6);
    printList(head);

	cout<<"\nInserting element at top: \n";
	push(&head, 7);
    printList(head);

	cout<<"\nInsert element at top: \n";
	push(&head, 1);
    printList(head);

	cout<<"\nInsert element at end: \n";
	append(&head, 4);
    printList(head);

    cout<<"\nInsert element after 7: \n";
	insertAfter(head->next, 8);
    printList(head);
	
	cout<<"\nCreated Linked list is: ";
	printList(head);
	
    deleteNode(&head, 7);
    cout<<"\n\nDeleting element: \n";
    printList(head);
	return 0;
}