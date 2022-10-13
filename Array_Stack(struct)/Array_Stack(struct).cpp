#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef int element;
typedef struct {
	element data[MAX_SIZE];
	int top;
}StackType;

void init_stack(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return (s->top == -1);
}
int is_full(StackType* s) {
	return (s->top == (MAX_SIZE - 1));
}
void push(StackType* s, element item) {
	if (is_full(s))
		exit(1);
	else
		s->data[++(s->top)] = item;
}
int pop(StackType* s) {
	if (is_empty(s))
		exit(1);
	else
		return s->data[(s->top)--];
}
int peek(StackType* s) {
	if (is_empty(s))
		exit(1);
	else
		return s->data[s->top];
}
int main() {
	StackType s;

	init_stack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("%d\n", pop(&s)); 
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
}