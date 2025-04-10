#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const double eps = 1e-6;

double f(double a , double b , double c , double x){
	return (b * (x - x * c / sqrt(a * a - x * x)) - x * sqrt(c * c + (x - x * c / sqrt(a * a - x * x)) * (x - x * c / sqrt(a * a - x * x))));
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    bool ch = 1;
    double a , b , c;
    while(cin >> a >> b >> c){
    	double l = 0 , r = 1e18L , m;
    	while(r - l >= eps){
    		m = l  + (r - l) / 2;
    		if(f(a , b , c , m) > 0) l = m;
    		else r = m;
    	}
    	// if(ch){
    	// 	ch = 0;
    	// }else if(!ch) cout<<endl;
    	cout<<fixed<<setprecision(3)<<l<<endl;
    }

    return 0;
}