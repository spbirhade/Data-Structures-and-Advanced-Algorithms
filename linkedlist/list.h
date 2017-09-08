#ifndef LIST
#define LIST

typedef struct node {
	int data;
	struct node *next;
} NODE;


NODE * create_list();

void display(NODE *);

#endif
