#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define int long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int n; cin >> n;
        set<int>ft;
        int x = 1;
        for(int i = 1 ; i <= 14 ; i++){
            x *= i;
            ft.insert(x);
        }
        int cnt = 0;
        //cout<<ft.size();
        for(int bit = 40 ; bit >= 0 ;bit--){
            if(ft.find(n) != ft.end()){
                cnt++;
                n = 0;
                break;
            }
            else if(n & (1ll<<bit)){
                n -= (1ll << bit);
                cnt++;
            }
        }
        if(n == 0) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}