#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int m , n = 0 , e = 0 , s = 0 , w = 0; cin >> m;
    	bool f;
    	string st; cin >> st;
    	for(int i = 0; i < m; ++i){
    		if(st[i] == 'N') n++;
    		else if(st[i] == 'W') w++;
    		else if(st[i] == 'E') e++;
    		else s++;
    	}
    	
    	cout<<(f ? "YES\n" : "NO\n");
    }
    return 0;
}