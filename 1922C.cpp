#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;



int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int a[n];
    	for(int i = 0 ; i < n;i++) cin >> a[i];
    	vector<int> pre(n+1 , 0) , suf(n+1 , 0);
    	pre[1] = suf[n-1] = 1;
    	for(int i = 2 ; i < n;i++){
    		if((a[i-1] - a[i-2]) > (a[i] - a[i-1])) pre[i] = 1;
    		else pre[i] = (a[i] - a[i-1]);
    		pre[i] += pre[i-1];
    	}	
    	for(int i = n-2 ; i > 0;--i){
    		if((a[i+1] - a[i]) > (a[i] - a[i-1])) suf[i] = 1;
    		else suf[i] = (a[i] - a[i-1]);
    		suf[i] += suf[i+1];
    	}	
    	int m; cin >> m;
    	while(m--){
    		int x , y; cin >> x >> y;
    		x < y ? cout<<pre[y-1]-pre[x-1]<<endl : cout<<suf[y]-suf[x]<<endl;
    	}	
    
    }
    return 0;
}