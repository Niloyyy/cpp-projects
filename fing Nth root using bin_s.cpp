#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const double precision = 1e-8;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x; cin >> x;
    double lo = 1 , hi = x , mid;
    while(hi - lo > precision){
    	mid = (lo + hi) / 2;
    	if(mid*mid > x) hi = mid;
    	else lo = mid;
    }
    cout << lo;
    
    return 0;
}