#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define f first
#define s second
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	long long n; cin >> n;
    	vector<int>v;
    	v.emplace_back(n);
    	for(int bit = 0 ; bit <= msb(n);bit++){
    		if(n&(1ll<<bit)){
    			if(n^(1ll<<bit)) v.emplace_back(n^(1ll<<bit));
    		}
    	}
    	sort(v.begin() , v.end());
    	cout<<v.size()<<endl;
    	for(auto i : v){
    		cout<<i<<" ";
    	}
    	cout<<endl;
    
    }
    return 0;
}