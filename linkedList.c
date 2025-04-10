#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* append(struct node *root , int x ){
	struct node *tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = x;
	tmp->next = NULL;
	if(root == NULL){
		root = tmp;
	}else{
		struct node *head = root;
		while(head->next != NULL){
			head = head->next;
		}
		head->next = tmp;
	}

	return root;
}

struct node* insertion(struct node *root , int x , int pos){
	struct node *tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = x;
	tmp->next = NULL;
	if(pos == 0){
		root = tmp;
	}else{
		struct node *curr = root;
		for(int i = 0 ; i < pos-1 ;i++){
			if(curr->next != NULL){
				curr = curr->next;
			}
		}
		tmp->next = curr->next;
		curr->next = tmp;
	}
	return root;
}

struct node *delete(struct node *root , int key){
	
}



void print(struct node *root){
	struct node *curr_node = root;
	while(curr_node != NULL){
		printf("%d " , curr_node->data);
		curr_node =curr_node->next;
	}
}
	
int main(){
	struct node *root = NULL , *curr = NULL;

}


