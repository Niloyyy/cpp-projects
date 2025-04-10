#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const double prc = 1e-7;
const double pi = acos(-1);


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    double a , b , c; cin >> a >> b >> c;
    double lo = 0 , hi = 1000000000 , mid;
    while(hi-lo>prc){
    	mid = (lo+hi) / 2;
    	if(a*mid + b*sin(mid) == c) break;
    	if(a*mid + b * sin(mid) > c) {
    		hi = mid;
    	}
    	else lo = mid;
    }
    printf("%.6lf\n" , mid);
 }
    return 0;
}
