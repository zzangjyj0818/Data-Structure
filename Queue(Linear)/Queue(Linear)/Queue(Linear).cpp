#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

typedef int element;
typedef struct QueueType {
	int front;
	int rear;
	element	data[MAX_SIZE];
}QueueType;

void init(QueueType* q) {
	q->front = -1;
	q->rear = -1;
}

void print_queue(QueueType* q) {
	for (int i = 0; i < MAX_SIZE; i++) {
		if (i <= q->front || i > q->rear)
			printf(" | ");
		else
			printf("%d | ", q->data[i]);
	}
	printf("\n");
}

int is_full(QueueType* q) {
	if (q->rear == MAX_SIZE - 1)
		return 1;
	else
		return 0;
}

int is_empty(QueueType* q) {
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

void enqueue(QueueType* q, element item) {
	if (is_full(q))
		return;
	q->data[++(q->rear)] = item;
}

int dequeue(QueueType* q) {
	if (is_empty(q))
		return -1;
	int item = q->data[++(q->front)];
	return item;
}

int main() {
	int item = 0;
	QueueType q;

	init(&q);

	enqueue(&q, 10); print_queue(&q);
	enqueue(&q, 20); print_queue(&q);
	enqueue(&q, 30); print_queue(&q);

	item = dequeue(&q); print_queue(&q);
	item = dequeue(&q); print_queue(&q);
	item = dequeue(&q); print_queue(&q);
}