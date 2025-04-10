#include<bits/stdc++.h>
using namespace std;
#define sz 100001

void heapify(int arr[] , int i){
	int parent = (i - 1) / 2;
	if(parent < 0) return;
	else{
		if(arr[i] > arr[parent]){
			swap(arr[i] , arr[parent]);
			heapify(arr , parent);
		}
	}
}

void insertion(int arr[] , int &n , int key){
	n++;
	arr[n-1] = key;
	heapify(arr , n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[sz] = { 10 , 8 , 9 , 3 , 7};
    int n = 5;
    int key = 12;
    insertion(arr , n , key);

    for(int i = 0 ; i < n;i++) cout <<arr[i]<<" ";
    return 0;
}