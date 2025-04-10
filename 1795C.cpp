#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 2e5 + 9;

int bs(ll x , int l , int r , vector<ll> &preB , ll y){
    int m;
    while(l <= r){
        m = l + (r - l) / 2;
        if(preB[m] - y <= x) l = m + 1;
        else r = m - 1;
    }
    return r;
} 

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;

        vector<ll> a(n+1), b(n+1), preB(n+1, 0), cnt(n+1, 0), ex(n+1, 0);

        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

        for(int i = 1; i <= n; i++){
            preB[i] = preB[i-1] + b[i];
        }

        for(int i = 1; i <= n; i++){
            int j = upper_bound(preB.begin() + i , preB.end() + n , a[i] + preB[i-1]) - preB.begin() - 1;
            cnt[i]++;
            if(j+1 <= n) {
                cnt[j+1]--;
                ex[j+1] += (a[i] - preB[j] + preB[i-1]);
            }
        }

        for(int i = 1; i <= n; i++) cnt[i] += cnt[i-1];
        for(int i = 1; i <= n; i++) cout << cnt[i] * b[i] + ex[i] << ' ';
        cout << endl;   
    }
    return 0;
}
