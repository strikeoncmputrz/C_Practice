//Program to remove an entry from a linked list after an entry or the front

#include <stdio.h>


struct entry
{
	int value;
	struct entry *next;
};

/*
//Function to insert an entry into a linked list after an entry
void insertEntry(struct entry *insert, struct  entry *list_spot)
{
	//New struct points to list_spot's next struct
	insert->next = list_spot->next;
	//List_spot struct's next now points to inserted struct
	list_spot->next = insert;
}
*/

//Function that removes a link after the link passed as arg as long as it is not the last link
void removeEntry(struct entry *entry_ptr)
{
	if(entry_ptr->next != (struct entry *) 0)
	{
		struct entry *nxt = (entry_ptr->next)->next;
		entry_ptr->next = nxt;
	}

}

int main (void)
{

	struct entry n1,n2,n3;
	struct entry insert;
	struct entry front;
	struct entry *list_pointer;
	
	//Declare function removeEntry
	void removeEntry(struct entry *remove_next);
	
	/*//Struct to be inserted into list
	insert.value = 500;
	insert.next = (struct entry *) 0;
	*/
	
	//Build list
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0; //mark list end with null pointer

	//Build front of list
	front.value = 0;
	front.next = &n1;

	
	removeEntry(&n3);
	
	//Set list pointer to front of list
	list_pointer = front.next;
	
	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
