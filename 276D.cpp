#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    long long l , r; cin >> l >> r;
    if(l == r) cout<<(l^r);
    for(int bit = __lg(r) ; bit >= 0 ; bit--){
    	if( (l & (1ll<<bit)) != (r & (1ll<<bit))){
    		cout<<((1ll<<bit) ^ ((1ll<<bit) - 1ll ));
    		break;
    	}
    }
    return 0;
}