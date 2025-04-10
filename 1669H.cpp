#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
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

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	vector<int>a(n) , bits(31 , 0);
    	for(int i = 0 ; i < n;i++){
    		cin >> a[i];
    	}
    	for(int bit = 0 ; bit <= 30 ;bit++){
    		for(int i = 0 ; i < n;i++){
    			if( ((1<<bit)&a[i]) == 0) bits[bit]++;
    		}
    	}
    	for(int bit = 30 ; bit >= 0 ;bit--){
    		if(bits[bit] <= k){
    			for(int i = 0 ; i < n;i++){
    				a[i] |= (1<<bit);
    			}
    			k -= bits[bit];
    		}
    	}
    	int ans = a[0];
    	for(int i = 1 ; i < n;i++){
    		ans &= a[i];
    	}
    	cout<<ans<<endl;
    }
    return 0;
}