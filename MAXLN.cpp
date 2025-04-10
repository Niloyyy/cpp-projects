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
    for(int t = 1 ; t <= tc ;t++){
    	double r; cin >> r;
    	printf("Case %d: %.2lf\n",t ,  (16.0 * r * r + 1.0) / 4.0);
    
    }
    return 0;
}