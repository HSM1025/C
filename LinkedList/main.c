#include<stdio.h>
struct node{
	char data[20];
	struct node* next;
};
int main() {
	//Init node
	struct node item1 = { "apple", NULL };
	struct node item2 = { "banana", NULL };
	struct node item3 = { "carrot", NULL };
	//Linked
	struct node* head = &item1;
	item1.next = &item2;
	item2.next = &item3;
	printf("%s\n", head->data); // 1st item data
	printf("%s\n", head->next->data); // 2nd item data
	printf("%s ", head->next->next->data); // 3rd item data
}