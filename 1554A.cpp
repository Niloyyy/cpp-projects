#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc ; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<long long>v(n);
    	long long ans = 1 ;
    	for(int i = 0 ; i < n;i++) cin >> v[i];
    	if(n==2) cout << 1LL*v[0] * v[1] <<endl;
    	else{
    		for(int i = 1 ; i < n-1 ;i++){
    			ans = max({ans , 1LL*v[i-1] * v[i] , 1LL*v[i] * v[i+1]});
    		}
    		cout << ans <<endl;
    	}	
    }
    
    return 0;
}