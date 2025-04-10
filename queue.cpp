#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};
struct node *front = NULL , *rear = NULL;

void enqueue(int x){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = x;

	if(front == NULL && rear == NULL){
		front = rear = new_node;
	}else{
		rear->next = new_node;
		rear = new_node;
	}
	rear->next = NULL;
}

void dequeue(){
	struct node *temp = front;
	front = front->next;
	if(front == NULL){
		rear = NULL;
	}

	free(temp);
}
void printList(){
    struct node *temp = front;

    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	//printList();
	dequeue();
	printList();
    
    return 0;
}