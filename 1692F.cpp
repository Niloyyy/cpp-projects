#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define MOD 1e9 + 7
using namespace std;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	multiset<int>st;
    	for(int i = 0 ; i < n;i++){
    		int x ; cin >> x;
    		x %= 10;
    		st.insert(x);
    	}
    	vector<int>v;
    	for(auto u : st){
    		v.push_back(u);
    	}
    	bool f = false;
    	for(int i = 0 ; i < v.size();i++){
    		for(int j = 0 ; j < v.size();j++){
    			for(int k = 0 ; k < v.size();k++){
    				if( i != j and i != k and j != k and (v[i]+v[j]+v[k]) % 10 == 3) f = true; 
    			}
    		}	
    	}
    	//for(auto i : v) cout<<i;
    	f ? cout<<"YES\n" : cout<<"NO\n";

    }
    return 0;
}