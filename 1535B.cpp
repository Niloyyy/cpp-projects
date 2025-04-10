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
    	vector<int>v(n);
    	int even = 0;
    	for(int i = 0 ; i < n ; i++){
    		cin >> v[i];
    		if(!(v[i]&1)) even++;
    	}
    	int sz = n - even;
    	vector<int>andu(sz);
    	for(int i = 0 , j = 0 ; i < n ; i++){
    		if(v[i]&1){
    			andu[j++] = v[i];
    		}
    	}
    	sort(andu.begin(), andu.end() , greater<int>());
    	int ans = 0;
    	for(int i = 0 ; i < sz-1;i++){
    		for(int j = i+1 ; j < sz ;j++){
    			if(__gcd(andu[i] , 2*andu[j]) > 1) ans++;
    		}
    	}
    	//for(int i = 0 ; i < andu.size();i++) cout <<andu[i]<<" ";
    	cout <<ans + even*n - (even * (even + 1) / 2)<<endl;
    }
    
    return 0;
}