#include<bits/stdc++.h>
using namespace std;


struct node{ 
	int data;
	struct node *next;
};
struct node *head = NULL;


void append(int x){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = x;
	if(head == NULL){
		new_node->next = head;
		head = new_node;
	}else{
		struct node *curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = new_node;
		new_node->next = NULL;
	}
}

	// insertion(1, 0);
	// insertion(2, 1);
	// insertion(3,2);

void insertion(int x , int pos){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = x;
	if(pos == 0){
		new_node->next = NULL;
		head = new_node;
	}else{
		struct node *curr = head;
		for(int i = 0 ; i < pos-1 ;i++){
			curr = curr->next;
		}
		new_node->next = curr->next;
		curr->next = new_node;
	}
}

void delt(int key){
	struct node *temp;
	if(head->data == key){
		temp = head;
		head = head->next;
	}else{
		struct node *curr = head;
		while(curr->next->data != key){
			curr = curr->next;
		}
		temp = curr->next;
		curr->next = curr->next->next;
	}
	free(temp);
}


int main(){
	insertion(1, 0);
	insertion(2, 1);
	insertion(4 ,2);
	insertion(3,2);
	delt(3);

	struct node *curr = head;
	while(curr != NULL ){
		 cout << curr->data<<" ";
		 curr = curr->next;
	}
    return 0;
}