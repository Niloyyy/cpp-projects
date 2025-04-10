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

    int a = 0 , b = 0 , c; cin >> c;
    a += (1 << msb(c));
    for(int bit = msb(c) - 1 ; bit >= 0;bit--){
    	if(((1<<bit) & c)){
    		a > b ? b += (1 << bit) : a += (1 << bit);
    	}else{
    		a += (1<<bit);
    		b += (1<<bit);
    	}
    }
    cout<< 1ll * a * b;
    return 0;
}