#include<bits/stdc++.h>
using namespace std;

int LIS(int arr[] , int id , int prev , int n){
	if(id == n) return 0;
	int len = LIS(arr , id + 1 , prev , n);
	if(prev == -1 or arr[id] > arr[prev]){
		len = max(len , 1 + LIS(arr , id + 1 , id , n));
	}
	return len;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {4 , 9 , 7 , 2 , 8 , 9 , 3 , 7};
    cout<<LIS(arr , 0 , -1 , 8);


    return 0;
}