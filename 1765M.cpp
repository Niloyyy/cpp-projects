#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , a , b , min_lcm = INT_MAX; cin >> n;
    	vector<int>div;
    	for(int i = 1 ; i * i <= n;i++){
    		if( n % i == 0){
    			div.emplace_back(i);
    			if(n / i != i) div.emplace_back(n / i);
    		}
    	}
    	sort(div.begin() , div.end());	
    	for(int i = 0 ; i < div.size()-1 ;i++){
			int tmp = div[i] * ( n - div[i]) * 1ll / __gcd(div[i] , (n - div[i])); 
			if(tmp < min_lcm){
				a = div[i] ;
				b = n - div[i];
			}
    	}
    	cout << a <<' '<<b<<'\n';
    }
    return 0;
}