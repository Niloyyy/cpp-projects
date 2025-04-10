#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	ll x1 , y1 , x2 , y2 , x , y; cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    	ll ans = (x1*y2 + x2*y + x*y1) - (y1*x2 + y2*x + y*x1);
    	if(ans==0) cout<<"TOUCH\n";
    	else if(ans > 0) cout<<"LEFT\n";
    	else cout <<"RIGHT\n";
    }
    
    return 0;
}