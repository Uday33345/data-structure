#include <stdio.h>
#define SIZE 5 
int queue[SIZE];
int front = -1; 
int rear = -1; 
void enqueue(int x) {
    // Check if the queue is full
    if ((rear + 1) % SIZE == front) {
        printf("Queue overflow\n");
        return;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = x;
    if (front == -1) {
        front = 0;
    }
}
int dequeue() {
    if (front == -1) {
        printf("Queue underflow\n");
        return -1;
    }
    int x = queue[front];
    front = (front + 1) % SIZE;
    if (front == (rear + 1) % SIZE) {
        front = -1;
        rear = -1;
    }
    return x;
}
void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue is:\n");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", queue[rear]);
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    printf("Element deleted from queue is: %d\n", dequeue());
    printf("Element deleted from queue is: %d\n", dequeue());
    display();
    enqueue(60);
    enqueue(70);
    display();
    return 0;
}
