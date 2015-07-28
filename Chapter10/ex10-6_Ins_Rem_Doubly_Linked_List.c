//Implements a doubly linked list and prints it :-)
#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
	struct entry *prev;
};


//Function to insert an entry into a linked list after an entry
void insertEntry(struct entry *insert, struct  entry *list_spot)
{
	insert->prev = list_spot;  //New struct's previous points to list_spot
	insert->next = list_spot->next;  //New struct points to list_spot's next entry
	list_spot->next = insert; //List_spot struct's next now points to inserted struct
}


//Function that removes a link 
void removeEntry(struct entry *entry_ptr)
{	
	
	
	//If not the last entry in the list
	if(entry_ptr->next != (struct entry *) 0)
	{
		(entry_ptr->prev)->next = entry_ptr->next;
		(entry_ptr->next)->prev = entry_ptr->prev;

	}
	else
		(entry_ptr->prev)->next = (struct entry *) 0;
}

int main (void)
{

	struct entry n1,n2,n3,n4;
	struct entry insert;
	struct entry front;
	struct entry end;
	struct entry *list_pointer;
	
	//Declare function to insert entry  
	void insertEntry(struct entry *insert, struct entry *list_spot);
	//Declare function removeEntry
	void removeEntry(struct entry *remove); 
	

	//Struct to be inserted into list
	insert.value = 500;
	
	
	//Build front of list
	front.value = 0;
	front.next = &n1;
	front.prev = (struct entry *) 0;
	
	//Build list

	n1.value = 100;
	n1.prev = &n1; //mark list front with pointer to front placeholder 
	n1.next = &n2;
	n2.value = 200;
	n2.prev = &n1;
	n2.next = &n3;
	n3.value = 300;
	n3.prev = &n2;
	n3.next = &n4;
	n4.value = 400;
	n4.prev = &n3;
	n4.next = (struct entry *)0;//&end; //mark list end with pointer to end placeholder

	
	//Test Insertion
//	insertEntry(&insert, &n2);
	
	//Test Removal
	removeEntry(&n3);



	//Set list pointer to front of list
	list_pointer = front.next;
	//Traverse list, printing contents
	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
