#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n) , diff;
    	for(int i = 0 ; i < n ;i++){
    		cin >> v[i];
    		if(i > 1)
    			diff.push_back(abs(v[i]-v[i-1]));
    	}
    }
    
    return 0;
}



/*
           






*/