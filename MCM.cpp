#include<bits/stdc++.h>
using namespace std;

int MCM(int dim[] , int i , int j){
	if(i == j) return 0;
	int mini = INT_MAX;
	for(int k = i ; k < j;k++){
		int cost = dim[i-1] * dim[k] * dim[j] + MCM(dim , i , k) + MCM(dim , k + 1 , j);
		mini = min(mini , cost); 
	}
	return mini;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dim[] = { 1 , 2 , 3 , 4 , 3};
    int min_cost = MCM(dim  , 1 , 4);
    cout << min_cost;
    return 0;
}