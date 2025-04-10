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


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int n , ans = 0; cin >> n;
        vector< pair<int , int> > a , b , c;
        for(int i = 0 ;i < n;i++){
            int x; cin >> x;
            a.push_back({x , i+1});
        }
        for(int i = 0 ;i < n;i++){
            int x; cin >> x;
            b.push_back({x , i+1});
        }
        for(int i = 0 ;i < n;i++){
            int x; cin >> x;
            c.push_back({x , i+1});
        }
        sort(a.begin() , a.end() , greater<>());
        sort(b.begin() , b.end() , greater<>());
        sort(c.begin() , c.end() , greater<>());
        for(int i = 0 ; i < 3;i++){
            for(int j = 0 ; j < 3;j++){
                for(int k = 0 ; k < 3;k++){
                    if(a[i].s != b[j].s and a[i].s != c[k].s and b[j].s != c[k].s){
                        ans = max(ans , a[i].f + b[j].f + c[k].f);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}