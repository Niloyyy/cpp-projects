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

int read(){
    char k = getchar(); int x = 0;
    while(k < '0' || k > '9') k = getchar();
    while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
    return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int n , k; cin >> n >> k;
        vector<int>v(n);
        for(int i = 0 ; i < n;i++){
            cin >> v[i];
        }
        int l = 0 , r = n-1 , sinked = 0;
        while(k > 0){
            if(v[l] == v[r] and k >= v[l]){
                k -= v[l];
                v[l++] = 0;
                v[r--] = 0;
                sinked += 2;
            }else if(v[l] < v[r] and k >= v[l]){
                k -= v[l];
                v[r] -= v[l];
                v[l] = 0;
                sinked++;
            }else if(v[l] > v[r] and k >= v[r]){
                k -= v[r];
                v[l] -= v[r];
                v[r] = 0;
                sinked++;
            }

            if(k <= 0) break;
        }
        cout<<sinked<<endl;

    }
    return 0;
}