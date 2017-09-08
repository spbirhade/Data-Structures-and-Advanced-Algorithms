#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int menu()
{
	int choice = 0;


	printf("1. Create list\n\
2. Dispay list\n\
	Enter your choice: ");
	scanf("%d", &choice);

	return choice;

}


int main()
{

	int choice = 0;

	NODE * head = NULL;

	do {
		choice = menu();

		switch(choice) {

			case 1:
				head = create_list();
				break;

			case 2:
				display(head);
				break;

			default:
				printf("Wrong choice\nTry");
		}

	} while (choice != 9);
	
	return 0;
}
