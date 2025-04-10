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


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	string s; cin >> s;
    	s[0] = '(';
    	for(int i = 2; i < n;i+=2){
    		if(s[i-1] == '(') s[i] = ')';
    		else s[i] = '(';
    	}
    	vector<int>u , v;
    	for(int i = 0 ; i < n;i++){
    		if(s[i] == '(') u.push_back(i);
    		else v.push_back(i);
    	}
    	int cnt = 0;
    	for(int i = 0 ; i < n/2 ;i++){
    		cnt += abs(u[i] - v[i]);
    	}
    	cout<<cnt<<endl;
    
    }
    return 0;
}