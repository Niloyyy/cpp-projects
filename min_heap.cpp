#include<bits/stdc++.h>
using namespace std;
#define sz 10001

void heapify(int arr[] , int n , int i){
	int parent = (i - 1) / 2;
	if(parent < 0){
		return;
	}else{
		if(arr[i] < arr[parent]){
			swap(arr[i] , arr[parent]);
			heapify(arr , n , parent);
		}
	}
}

void insertion(int arr[] , int &n , int key){
	n++;
	arr[n-1] = key;
	heapify(arr , n , n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[sz] = { 5 , 7 , 9 , 10 , 12 };
    int n = 5; 
    int key = ;
    insertion(arr , n , key);
    for(int i = 0 ; i < n;i++){
    	cout <<arr[i]<<" ";
    }

    
    return 0;
}