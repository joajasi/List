#include "List.h"

int main() {
	Node head;
	Node tail; 
	List list(&head, &tail);
	list.show();
	list.push(2);
	list.push(5);
	list.show();
	list.pop();
	list.show();
	list.pop();
	list.show();
}
