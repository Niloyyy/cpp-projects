#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* new_node(int x){
	struct node *tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = x;
	tmp->left = NULL;
	tmp->right = NULL;

	return tmp;
}

struct node* insertion_left(struct node *root , int x){
	root->left = new_node(x);
	return root->left;
}

struct node* insertion_right(struct node *root , int x){
	root->right = new_node(x);
	return root->right;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct node *root = NULL;
    root = new_node(7);
    root = insertion_left(root , 3);
    root = insertion_right(root , 4);


    
    return 0;
}