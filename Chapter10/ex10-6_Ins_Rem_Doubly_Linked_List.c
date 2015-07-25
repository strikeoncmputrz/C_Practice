//IMplements a doubly linked list and prints it :-)
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
	
	insert->prev = list_spot->prev;  //New struct points to list_spot's prev struct
	
	insert->next = list_spot->next;  //New struct points to list_spot's next entry
	
	list_spot->next = insert; //List_spot struct's next now points to inserted struct
}


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
	struct entry end;
	struct entry *list_pointer;
	
	//Declare function removeEntry
	//void removeEntry(struct entry *remove_next);
	
	/*//Struct to be inserted into list
	insert.value = 500;
	insert.next = (struct entry *) 0;
	*/
	
	//Build front of list
	front.value = 0;
	front.next = &n1;
	front.prev = (struct entry *) 0;
	
	//Build list
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0; //mark list end with null pointer

	//Build end of list
	end.value = 0;
	end.next = (struct entry *) 0;
	end.prev = &n3; 
	//removeEntry(&n3);
	
	//Set list pointer to front of list
	list_pointer = front.next;
	
	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
