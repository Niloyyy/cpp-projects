#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
const int m = 1e9;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	map<int , int>mp;
    	for(int i = 0 ; i < n * (n -1) / 2;i++){
    		int x; cin >> x;
    		mp[x]++;
    	}
    	int i = n - 1;
    	for(auto &it : mp){
    		while(it.s){
    			it.s -= i--;
    			cout<<it.f<<' ';
    		}
    	}
    	cout<<m<<endl;
    
    }
    return 0;
}