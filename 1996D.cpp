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
    	int n , x , ans = 0; cin >> n >> x;
    	for(int a = 1 ; a <= n;a++){
    		for(int b = 1 ; a * b <= n;b++){
    			int c = min( (n - a * b) / (a + b) , x - a - b);
    			if(c > 0) ans += c;
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}