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

double get_angle(double a , double b , double c){
	double an = acos( (a * a + b * b - c * c) / (2.0 * a * b) );
	return an;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	double r1 , r2 , r3; cin >> r1 >> r2 >> r3;
    	double s = r1 + r2 + r3;
    	double a = r1 + r2 , b = r1 + r3 , c = r2 + r3;
    	double ans = sqrt(s * (s - a) * (s - b) * (s - c)) -  get_angle(a , b , c) * r1 * r1 / 2.0 - get_angle(a , c , b) * r2 * r2 / 2.0 - get_angle(b , c , a) * r3 * r3 / 2.0;
    	printf("%.6lf\n", ans);
    }
    return 0;
}