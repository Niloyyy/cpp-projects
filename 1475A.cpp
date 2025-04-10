#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	long long x; cin >> x;
    	if(x&1) cout <<"YES\n";
    	else{
    		(x & (x - 1) )  ? cout <<"YES\n" : cout <<"NO\n";
    	}
    }
    
    return 0;
}