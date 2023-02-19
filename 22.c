#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if (rear == MAX_SIZE-1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("%d has been added to the queue\n", data);
    }
}

int dequeue() {
    int data = -1;
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
    } else {
        data = queue[front];
        front++;
        printf("%d has been removed from the queue\n", data);
    }
    return data;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
	printf("Please Choose one of the options :\n");
	printf("1. Add to que. \n");
	printf("2. Remove from que. \n");
	printf("3. Show que. \n");
	printf("4. Exit.\n");
	printf("Enter your choice :");
	
	int choice;
	scanf("%d",&choice);

	switch(choice) {
		case 1 :
			printf("Enter the number:");
			
			int num;
			scanf("%d",&num);

			enqueue(num);

			break;
		case 2 :
			dequeue();
			break;
		case 3 :
			display();
			break;
		case 4:
			return 0;
	}
	printf("\n");
	
	main();
}
