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

bool is_equal(vector<int>v){
	for(int i = 1 ; i < v.size();i++){
		if(v[i-1] != v[i]) return false;
	}
	return true;
}

bool one(vector<int>v){
	for(auto u : v){
		if(u == 1) return true;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	for(auto &i : v) cin >> i;
    	if(is_equal(v)) cout<<"YES\n";
    	else if(one(v)){
    		bool f = true;
    		sort(v.begin() , v.end());
    		//for(auto i : v) cout<<i<<" ";
    		for(auto i = 1 ; i < v.size();i++){
    			//if(v[i-1] == 1) continue;
    			if(v[i-1]+1 == v[i]){
    				f = false;
    			}
    		}
    		if(f) cout<<"YES\n";
    		else cout<<"NO\n";    		
    	}
    	else cout<<"YES\n";	

    }
    return 0;
}