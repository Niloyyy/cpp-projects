#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n;i++) cin >> v[i];
    for(int i = 0 ; i < (1 << n);i++){
    	for(int j = 0 ; j < n;j++){
    		if(i &(1 << j)) cout << v[j]<<" ";
    	}
    	cout <<endl;
    }
    
    return 0;
}