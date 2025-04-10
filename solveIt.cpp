#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const double prc = 1e-13;
double p , q , r , s , t , u;
double slv(double mid){
	return p * exp(-mid) + q * sin(mid) + r * cos(mid) + s * tan(mid) + t * mid * mid + u;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while( cin >> p >> q >> r >> s >> t >> u ){
    if(slv(0) < 0 || slv(1) > 0){ 
    		printf("No solution");
    	}else{	
		    double lo = 0 , hi = 1 , mid;
		    while(hi - lo > prc) {
		    	mid = (lo + hi) / 2;
		    	if(slv(mid) >  0) lo = mid;
		    	else hi = mid;
		    }
		    printf("%.4lf", lo);
		}
		printf("\n");	
  }
   return 0;
}