#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
 		int x_mn = INT_MAX , x_mx = INT_MIN , y_mn = INT_MAX , y_mx = INT_MIN;
 		int p_mn = INT_MAX , p_mx = INT_MIN , q_mn = INT_MAX , q_mx = INT_MIN;

    	for(int i = 1 ; i <= 4;i++){
    		int x , y; cin >> x >> y;
    		x_mn = min(x , x_mn);
    		x_mx = max(x , x_mx);
    		y_mn = min(y , y_mn);
    		y_mx = max(y , y_mx);
    	}

    	for(int i = 1 ; i <= 4;i++){
    		int x , y; cin >> x >> y;
    		p_mn = min(x , p_mn);
    		p_mx = max(x , p_mx);
    		q_mn = min(y , q_mn);
    		q_mx = max(y , q_mx);
    	}
    	cout<<(x_mn + x_mx) / 2<<' '<<(y_mn + y_mx) / 2 <<' '<<(p_mn + p_mx) / 2<<' '<<(q_mn + q_mx) / 2<<endl;
    }
    return 0;
}