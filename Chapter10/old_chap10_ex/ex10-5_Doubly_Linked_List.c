//Program to illustrate a doubly linked list and iterate through it. 

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
	struct entry *last;
};


int main (void)
{

	struct entry n1,n2,n3;
	struct entry insert;
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

	list_pointer = &n1;

	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
