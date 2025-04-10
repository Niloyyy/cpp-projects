#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    long long x; cin >> x;
    int ans = 0;
    for(int i = 1 ; i < 3 ;i++){
        ans += (int)sqrtl(x / (1ll<<i));
    }
    cout<<ans;
    return 0;
}