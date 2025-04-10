#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int a , b , c; cin >> a >> b >> c;
    	int mn = min({a , b , c});
    	int mx = max({a , b , c});
    	int mid = (a+b+c)-(mn+mx);
    	if(a % mn == 0 && b % mn == 0 && c % mn == 0){
    		int ans = (mx/mn -1) + (mid/mn - 1);
   		 	if(ans <= 3)  
   		 		cout << "YES\n";
   		 		else  cout <<"NO\n";
    	}else cout << "NO\n";
    }
    
    return 0;
}