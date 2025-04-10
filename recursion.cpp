#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
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
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
ll call , calldp;
const int N = 100 , a = 0  , b = 1;
ll dp[100];
int dpreturn;

ll fibdp(ll n){
    if(dp[n]){
        dpreturn++;
        cout<<n<<endl;
        return dp[n];
    }
    if(n < 2) return dp[n] = n;
    return dp[n] = (fibdp(n-1) % mod +fibdp(n-2) % mod) % mod;
}
ll fibo(ll n){
    call++;
    if(n < 2) return n;
    return fibo(n-1) + fibo(n-2);
}

int read(){
    char k = getchar(); int x = 0;
    while(k < '0' || k > '9') k = getchar();
    while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
    return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    //int call = 0;
    //cout<<fibo(n-1 )%mod<<' ';
    //cout<<call<<endl;
    

    int  f = fibdp(n-1);
    //cout<<"f = "<<f<<endl;
    //cout<<calldp<<' '<<dpreturn<<endl;
    //for(auto i : dp) cout<<dp[i]<<endl;
    return 0;
}