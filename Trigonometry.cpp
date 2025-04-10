#include<bits/stdc++.h>
const double  PI  = 2*acos(0.0);
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-5
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;


double bs(double x){
	double l = 0 , r = PI, m;
	while(r - l >= eps){
		m = (l + r) / 2.0;
		if(1.0 * sin(m) >= x){
			r = m;
		}else {
			l = m;
		}
	}
	return m;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	double sina , sinb , sinc; cin >> sina >> sinb >> sinc;
    	double ans1 = round(bs(sina) * 180.0 / PI);
    	double ans2 = round(bs(sinb) * 180.0 / PI);
    	double ans3 = round(bs(sinc) * 180.0 / PI);
    	ans1 + ans2 + ans3 != 180 ?  printf("%.0lf\n", 180 - max({ans1 , ans2 , ans3})) : printf("%.0lf\n",max({ans1 , ans2 , ans3}));
    }
    return 0;
}

//