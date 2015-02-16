//Program to illustrate a doubly linked list and inserting and removing elements from it. 

#include <stdio.h>

//Defines an entry to a doubly linked list
struct entry
{
	int value;
	struct entry *next;
	struct entry *last;
};

//Function to insert an entry into doubly linked list.
void insertEntry(struct entry *ins, struct entry *insert_here)
{
	ins->last = insert_here;
	ins->next = insert_here->next;
	insert_here->next = ins;
}

//Function to remove an entry from a doubly linked list.
void removeEntry(struct entry *rem)
{
	struct entry *removeL = rem->last;
	struct entry *removeN = rem->next;
	
	removeL->next = removeN;
	removeN->last = removeL;

}

int main (void)
{

	struct entry n1,n2,n3;
	struct entry insert;
	struct entry remove;
	struct entry front;
	struct entry *list_pointer;
	

	//Build list
	n1.value = 100;
	n1.next = &n2;
	n1.last = (struct entry *) 0; //Mark front of list with null pointer
	n2.value = 200;
	n2.next = &n3;
	n2.last = &n1;
	n3.value = 300;
	n3.next = (struct entry *) 0; //mark list end with null pointer
	n3.last = &n2;

	//Constuct front of list
	front.next = &n1;

	insert.value = 500;
	insert.next = 0;

	insertEntry(&insert, &front);
	removeEntry(&n2);

	list_pointer = front.next;
	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
