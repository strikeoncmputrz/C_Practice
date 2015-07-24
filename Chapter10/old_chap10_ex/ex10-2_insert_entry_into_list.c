//Program to insert an entry into a linked list after an entry

#include <stdio.h>


struct entry
{
	int value;
	struct entry *next;
};


//Function to insert an entry into a linked list after an entry
void insertEntry(struct entry *insert, struct  entry *list_spot)
{
	//New struct points to list_spot's next struct
	insert->next = list_spot->next;
	//List_spot struct's next now points to inserted struct
	list_spot->next = insert;
}


int main (void)
{

	struct entry n1,n2,n3;
	struct entry *list_pointer = &n1;
	struct entry insert;

	//Declare function
	void insertEntry(struct entry *ins, struct entry *lspot);
	
	//Struct to be inserted into list
	insert.value = 500;
	insert.next = '\0';

	//Build list
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0; //mark list end with null pointer


	insertEntry(&insert, &n2);
	
	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
