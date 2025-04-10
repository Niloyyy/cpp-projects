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
    	int n; cin >> n;
    	vector<int>v(n+1) , pre_xor(n+1);
        pre_xor[0] = 0;
    	LR(1 , n){
    		cin >> v[i];
            pre_xor[i] = v[i] ^ pre_xor[i-1];
    	}
        bool f = false;
        for(int i = 1 ; i < n;i++){
            if(pre_xor[i] == (pre_xor[i]^pre_xor[n])) f = true;
        }
        for(int i = 1 ; i <= n-2 ;i++){
            for(int j = i+1 ; j <= n-1 ; j++){
                int one = pre_xor[i];
                int two = pre_xor[j] ^ pre_xor[i];
                int th = pre_xor[n] ^ pre_xor[j];
                if(one == two and one == th and two == th){
                    f = true;
                    break;
                }
            }
        }
        f ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}