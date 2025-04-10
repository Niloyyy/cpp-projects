#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const double eps = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x; cin >> x;
    double l = 0 , h = x   , m;
    while(h - l > 1e-15){
    	m = (h+l)/2;
        if (m*m > x) h = m ;
    	else l = m ;
    }
    cout <<(int)l;
    
    return 0;
}