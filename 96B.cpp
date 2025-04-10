#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
set<int>se;

void permutation (string &s , int l , int r){
	if(l == r) se.insert(stoi(s));
	else{
		for(int i = l ; i <= r; i++){
			swap(s[l] , s[i]);
			permutation(s , l + 1 , r);
			swap(s[l] , s[i]);
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if(n > (int)77774444){
    	 cout<<4444477777;
    	 return 0;
    }
    string s = "47";
    for(int i =  1; i < 8; i += 2){
    	permutation(s , 0 , i);
    	s += "47";
    }
    for(auto i : se){
    	if(i >= n){
    		cout<<i;
    		return 0;
    	}
    }
    return 0;
}