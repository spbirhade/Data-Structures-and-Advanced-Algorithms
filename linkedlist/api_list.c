#include <stdio.h>
#include <stdlib.h>
#include "list.h"


NODE * create_list()
{
	int data, n;
	NODE *newNode, *prev, *head;

	newNode = prev = head = NULL;

	printf("How many nodes? ");
	scanf("%d", &n);

	while (n > 0) {
		newNode = (NODE *) malloc(sizeof(NODE));

		if (newNode == NULL) {
			printf("Unable to allocate memory\n");
			continue;
		}

		printf("Enter data: ");
		scanf("%d", &data);
		newNode->data = data;
		newNode->next = NULL;

		if (head == NULL) {
			head = newNode;
			prev = head;
		} else {

			prev->next = newNode;
			prev = newNode;
		}
		n--;

	}	

	return head;
}


void display(NODE *head)
{
	NODE *tmp = NULL;

	tmp = head;

	while (tmp) {
		printf("%d\t", tmp->data);
		tmp = tmp->next; 
	}

}
