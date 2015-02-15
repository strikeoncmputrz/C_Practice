//Program to remove an entry from a linked list after an entry

#include <stdio.h>


struct entry
{
	int value;
	struct entry *next;
};


//Function to remove an entry into a linked list after an entry
void removeEntry(struct entry *list_spot)
{	
	//Temporary entry to hold address of next entry pointed to by entry to be removed
	struct entry *remove = list_spot->next;
	
	//Change next entry of entry pointed to by list spot to the entry to be removed's next entry
	list_spot->next = remove->next;
}


int main (void)
{

	struct entry n1,n2,n3;
	struct entry insert;
	struct entry front;
	struct entry *list_pointer;
	
	//Declare function to remove entry after lspot
	void removeEntry(struct entry *lspot);
	

	//Build list
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0; //mark list end with null pointer

	//Build front of list
	front.value = -1;
	front.next = &n1;

	removeEntry(&front);
	
	//Set list pointer to front of list
	list_pointer = front.next;
	
	while(list_pointer != (struct entry *) 0)
	{
		printf("%i\n", list_pointer->value);
		list_pointer  = list_pointer->next;
	}

	return 0;

}
