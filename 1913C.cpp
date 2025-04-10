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

    int tc = 1; //cin >> tc;
    while(tc--){
    	int m; cin >> m;
    	map<int,int>mp;
    	while(m--){
    		int q , key; cin >> q >> key;
    		if(q == 1) mp[(1<<key)]++;
    		else{
    			for(int bit = 29 ; bit >= 0 ;bit--){
    				int fr = mp[(1<<bit)];
    				if(fr > 0 and (1<<bit) <= key){
    					while(1){
    						key -= (1<<bit);
    						fr--;
    						if(fr == 0 or key < (1<<bit)) break;
    					}
    				}   				
    			}
    			cout<<(key == 0 ? "YES\n" : "NO\n");
    		}
    	}
    
    }
    return 0;
}