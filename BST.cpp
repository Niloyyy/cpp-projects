#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node *left , *right;
};

struct node *new_node(int x){
    struct node *tmp = (struct node*)malloc(sizeof(struct node));
    tmp->val = x;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

struct node *insertion(struct node *root , int x){ //O(height of tree)
    if(root == NULL) return new_node(x);
    
    if(x > root->val)
    root->right = insertion(root->right , x);
    else
    root->left = insertion(root->left , x);
    
    return root;
}

void preorder(node *root){
    if(root == NULL) return;
    cout << root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->val<<" ";
    inorder(root->right);
}

void postorder(node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val<<" ";
}

struct node *search(struct node *root , int x){
    if(root == NULL || root->val == x) return root;

    if(x > root->val) return search(root->right , x);
    else return search(root->left , x);
}


int main() {
    struct node *root = NULL;
    cout<<"Number of element: ";
    int n; cin >> n;
    for(int i = 1 ;i <= n;i++){
        int x ; cin >> x;
        root = insertion( root , x);
    }
    cout<<"Inorder traversing: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversing: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversing: ";
    postorder(root);
    cout<<endl;

    cout<<"Which element you wanna find: ";
    int key; cin >>key;
    if(search(root , key) == NULL) 
        cout <<"Not found";
    else cout <<"Found";

    
    return 0;
}