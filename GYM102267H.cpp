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

    int v ; cin >> v;
    double s ; cin >> s;
    double theta = 90.0 - 180.0 / v;
    theta = PI * theta / 180;
    double r = s / (2.0 * cos(theta));
    printf("%.9lf", PI * r * r);
    return 0;
}