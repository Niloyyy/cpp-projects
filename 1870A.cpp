#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n , k , x; cin >> n >> k >> x;
    	if(n >= k){
    		if(x > k){
    		int ans = (k * k - k) / 2 + (n - k) * x;
    		cout << ans <<endl;
    	    }else if(k - x <= 1){
               int ans = (k*k - k) / 2 + (k - 1) * (n - k);
    		   cout << ans <<endl;	
    	    }else cout <<-1<<endl;
    	}else if (k == x && k < n){
    		int ans = (k*k - k) / 2 + (k - 1) * (n - k);
    		cout << ans <<endl;	
    	}else{
    		cout <<-1<<endl;
    	}
    }
    
    return 0;
}