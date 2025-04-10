#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node *next;
};

struct Stack{
    int val;
    Stack *prev, *next;
};

Node* Append(Node *root, int x)
{
    Node *newnode = new Node();
    newnode -> val = x;
    newnode -> next = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        Node *currNode = root;
        while(currNode -> next != NULL)
        {
            currNode = currNode -> next;
        }
        currNode -> next = newnode;
    }
    return root;
}

Node* InserT(Node *root, int x, int pos) // pos = 0, insert at root
{
    Node *newnode = new Node();
    newnode -> val = x;
    newnode -> next = NULL;

    if(pos == 0)
    {
        newnode -> next = root;
        root = newnode;
    }
    else
    {
        Node *currNode = root;
        for(int i=0;i<pos-1;i++)
        {
            if(currNode -> next != NULL)
            {
                currNode = currNode -> next;
            }
        }
        newnode -> next = currNode -> next;
        currNode -> next = newnode;
    }
    return root;
}

Node* SortedInsert(Node *root, int x)
{
    Node *newnode = new Node();
    newnode -> val = x;
    newnode -> next = NULL;

    if(root == NULL)
    {
        root = newnode;
    }
    else
    {
        Node *prevNode = NULL;
        Node *currNode = root;

        while(currNode != NULL)
        {
            if(currNode -> val > x)
            {
                if(currNode == root)
                {
                    newnode -> next = root;
                    root = newnode;
                }
                else
                {
                    newnode -> next = currNode;
                    prevNode -> next = newnode;
                }
                return root;
            }
            else
            {
                prevNode = currNode;
                currNode = currNode -> next;
            }
        }
        prevNode -> next = newnode;
    }
    return root;
}

Node* Delete(Node *root, int x)
{
    Node *prevNode = NULL;
    Node *currNode = root;

    while(currNode != NULL)
    {
        if(currNode -> val == x)
        {
            if(currNode == root)
            {
                root = currNode -> next;
                delete(currNode);
            }
            else
            {
                prevNode -> next = currNode-> next;
                delete(currNode);
            }
            return root;
            return root;
        }
        else
        {
            prevNode = currNode;
            currNode = currNode -> next;
        }
    }
    return root;
}


void Print(Node *root)
{
    Node *currNode = root;
    while(currNode != NULL)
    {
        cout<<currNode -> val<<" ";
        currNode = currNode -> next;
    }
    cout<<endl;
}

Stack* Push(Stack *top,int x)
{
    Stack *newnode = new Stack();
    newnode -> val = x;
    newnode -> prev = NULL;
    newnode -> next = NULL;

    if(top == NULL)
    {
        top = newnode;
    }
    else
    {
        top -> next = newnode;
        newnode -> prev = top;
        top = newnode;
    }
    return top;
}


Stack* Pop(Stack *top)
{

    if(top -> prev == NULL)
    {
        top = NULL;
    }
    else
    {
        Stack *delNode = top;
        top = top->prev;
        delete(delNode);
    }
    return top;

}
void StackPrint(Stack *top)
{
    Stack *currNode = top;
    while(currNode != NULL)
    {
        cout<<currNode -> val << " ";
        currNode = currNode -> prev;
    }
    cout<<endl;
}

int main()      
{
    Node *root = NULL;
    root = InserT(root , 0 , 0);
    root = InserT(root , 1 , 1);
    root = InserT(root , 3 , 3);
    Print(root);
    root = InserT(root , 2 , 2);
    Print(root);
    // root = Append(root,1);
    // root = Append(root,2);
    // root = Append(root,3);
    // Print(root);
   //root = InserT(root,1,0);
   //Print(root);
   //root = InserT(root,7,3);
   //Print(root);
   //root = InserT(root,20,5);
   //Print(root);
//    root = SortedInsert(root,20);
//    Print(root);
//    root = SortedInsert(root,15);
//    Print(root);
//    root = SortedInsert(root,1);
//    Print(root);
//    root = Delete(root,15);
//    Print(root);
//    root = SortedInsert(root,35);
//    Print(root);
//    root = Delete(root,1);
//    Print(root);
//    root = SortedInsert(root,10);
//    Print(root);
//    root = Delete(root,35);
//    Print(root);

    // int n; cin >>n;
    // while(n--){
    //     int x; cin >> x;
    //     root = Append(x);
    // }


    // Stack *top = NULL;
    // top = Push(top,5);
    // top = Push(top,7);
    // top = Push(top,9);
    // StackPrint(top);
    // top = Pop(top);
    // top = Pop(top);
    // StackPrint(top);
    // top = Pop(top);
    // StackPrint(top);


}
