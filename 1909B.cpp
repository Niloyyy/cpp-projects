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

bool f(long long x , vector<long long>v){
	set<long long>s;
	for(auto i : v){
		s.insert(i % x);
	}
	return (s.size() == 2);
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<long long>v(n);
    	for(auto &i : v) cin >> i;
    	for(int bit = 1 ; bit < 63; bit++){
    		if(f( (1ll<<bit) , v)){
    			cout<<(1ll<<bit)<<endl;
    			break;	
    		}
    	}
    }
    return 0;
}