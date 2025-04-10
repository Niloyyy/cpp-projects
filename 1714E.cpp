#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

bool is_sm(vector<int>v){
	if(v.size() == 1) return true;
	for(int i = 1 ; i < v.size();i++){
		if(v[i-1] != v[i]) return false;
	}
	return true;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>a(n);
    	for(auto &i : a) cin >> i;
    	bool fi = true;
    	for(auto &i : a){
    		fi &= !(i % 5);
    		!(i % 5) ? i += (i % 10) : i = i; 
    	}
    	if(fi and is_sm(a)){
    		cout<<"Yes\n";
    	}else{
    		int odd = 0 , even = 0;
    		for(auto i : a){
    			int temp = i;
    			if(temp % 5 == 0) continue;
    			while(temp % 10 != 2){
    				temp += (temp % 10);
    			}
    			string s = to_string(temp);
    			int sz = s.size();
    			if((int)(s[sz-2] - '0') % 2) odd++;
    			else even++;
    		}
    		(odd == n or even == n) ?  cout <<"Yes\n" : cout <<"No\n";
    	} 	
    }
    return 0;
}