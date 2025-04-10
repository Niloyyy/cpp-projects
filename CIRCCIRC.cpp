#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const double PI = acos(-1);

double K(double x1 , double y1 , double x2 , double y2 , double x3 , double y3){
	return (-x1 * x2 + x1 * x3 + x2 * x3 - y1 * y2 + y1 * y3 + y2 * y3 - x3 * x3 - y3 * y3) / (x1 * y3 - x1 * y2 + x2 * y1 - x2 * y3 + x3 * y2 -x3 * y1);
}

double F(double x1 , double y1 , double x2 , double y2 , double k){
	return -0.5 * (x1 + x2 + k * y1 - k * y2);
}

double G(double x1 , double y1 , double x2 , double y2 , double k){
	return -0.5 * (y1 + y2 - k * x1 + k * x2);
}

double C(double x1 , double y1 , double x2 , double y2 , double k){
	return x1 * x2 + y1 * y2 + k * (y1 * x2 - x1 * y2);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    double x1 , y1 , x2 , y2 , x3 , y3;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
    	double k = K(x1 , y1 , x2 , y2 , x3 , y3);
    	double f = F(x1 , y1 , x2 , y2 , k);
    	double g = G(x1 , y1 , x2 , y2 , k);
    	double c = C(x1 , y1 , x2 , y2 , k);
    	double r = sqrt(f * f + g * g - c);
    	cout<<fixed<<setprecision(2)<<2 * PI * r<<endl;
    }

    return 0;
}