#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int bs(vector<int>&v , int mx , int car){
    for(int i = 0 ; i < v.size();i++){
        if(v[i] > mx){
            car += (v[i] - mx);
        }else if(car > 0){
            ll need = mx - v[i];
            car -= need;
        }
    }
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<ll>a(n);
        ll avg , sum = 0 , extra = 0;
        for(auto &u : a){
            cin >> u;
            sum += u;
        }
       

    
    }
    return 0;
}