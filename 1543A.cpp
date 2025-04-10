#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	long long x , y; cin >> x >> y;
    	long long dhur = abs(x-y);
        ll a = x % dhur;
        ll b = dhur - (x % dhur);
        cout <<dhur<<' '<<min(a , b)<<endl;
    }
    
    return 0;
}