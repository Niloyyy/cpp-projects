#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        ll a , b , k; cin >> a >> b >> k;
        if(a < b) swap(a , b);
        for(int bit = msb(a^b)-1 ; bit >= 0 ;bit--){
            bool aa = ((1ll<<bit) & a) , bb = ((1ll<<bit) & b);
            if( aa != bb ){
                if(aa and k >= (1ll<<bit) ){
                    b |= (1ll<<bit);
                    a ^= (1ll<<bit);
                    k -= (1ll<<bit);
                }
            }
        }
        cout<<a - b<<endl;        
    }
    return 0;
}

