#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	map<int , int>mp;
    	for(int i = 1 ; i <= n;i++){
    		int x; cin >> x;
    	    mp[x-i]++;
    	}
    	long long ans = 0;
     	for (auto it = mp.begin(); it != mp.end(); it++) {
    		int x = it -> second;
    		ans += 1LL*x * (x - 1) / 2;
  		}
  		cout << ans <<endl;
    }
    
    return 0;
}