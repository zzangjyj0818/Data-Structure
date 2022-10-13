#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
typedef int element;
element stack[MAX_SIZE];
int top = -1;

int is_empty() {
	return (top == -1);
}
int is_full() {
	return (top == (MAX_SIZE - 1));
}
void push(element item) {
	if (is_full()) {
		exit(1);
	}
	else
		stack[++top] = item;
}
element pop() {
	if (is_empty())
		exit(1);
	else
		return stack[top--];
}
element peek() {
	if (is_empty())
		exit(1);
	else
		return stack[top];
}
int main() {
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
}