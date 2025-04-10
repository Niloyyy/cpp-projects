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

double area(double low , double high , double H){
	return PI * ( ( H * H / 4.0 * high - high * high * high / 3.0 ) - ( H * H / 4.0 * low - low * low * low / 3.0 ));
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double H , h1 , h2; 
    while(cin >> H >> h1 >> h2){
    	double hf = H / 2.0;
	    vector<double>ar;
	    ar.push_back( 2.0 * PI * hf * hf * hf / 3.0 + area(0 , h2 - H / 2 , H));
	    ar.push_back(2.0 * PI * hf * hf * hf / 3.0  - area(0 ,  h1 - H / 2 , H));
	    ar.push_back(4.0 * PI * hf * hf * hf / 3.0 - ar[0] - ar[1]);    
	    sort(ar.begin() , ar.end());
	    for(int i = 0 ; i < 3; i++){
	    	printf("%.6lf ", ar[i]);
	    }
    }
    return 0;
}