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

    double R;
    int n;
    while(cin >> R >> n){
    	if(n == 1){
    		cout<<R<<' '<<0<<' '<<0<<endl;
    		continue;
    	}
    	double r = R * sin(PI / n) / (1.0 + sin(PI / n));
    	double E = 2.0 * n * 0.5 * r * sqrt((R - r) * (R - r) - r * r) -  2.0 * n * abs(acos(r / (R-r))) * r * r / 2.0;
    	double I = PI * R * R - E - n * PI * r * r;
    	printf("%.10lf %.10lf %.10lf\n", r , E , I);
    }
    return 0;
}