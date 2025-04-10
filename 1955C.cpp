#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        ll n , k; cin >> n >> k;
        vector<int>v(n); 
        for(auto &i : v) cin >> i;
        int l = 0 , r = n-1 , ans = 0;
        while(k > 0 or l <= r){
            if(v[l] == v[r]){
                if(l == r and k >= v[l])
                {
                    k -= v[l];
                    v[l] = 0;
                }
                else if(k >= 2 * v[l])
                {
                    k -= 2 * v[l];
                    v[l] = 0;
                    v[r] = 0;
                    l++ , r--;
                }else{
                    break;
                }
            }
            else if(v[l] > v[r])
            {
                if(k >= 2 * v[r])
                {
                    k -= 2 * v[r];
                    v[l] -= v[r];
                    v[r] = 0;
                    r--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(k >= 2 * v[l])
                {
                    k -= 2 * v[l];
                    v[r] -= v[l];
                    v[l] = 0;
                    l++;
                }
                else
                {
                    break;
                }
            }
            for(auto i : v) cout<<i<<' ';
            cout<<endl;    
        }
        for(int i = 0 ;i < n;i++) ans += (v[i] == 0);
        cout<<ans<<endl;   
    }
    return 0;
}