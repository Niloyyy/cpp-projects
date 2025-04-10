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
#define pii pair<int,int>
#define f first
#define s second
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

    int n , m , k; cin >> n >> m >> k;
    char grid[n][m];
    for(int i = 0 ; i < n;i++){
    	for(int j = 0 ; j < m;j++){
    		cin >> grid[i][j];
    	}
    }
    pii s , d;
    cin >> s.f;
    cin >> s.s;
    cin >> d.f;
    cin >> d.s;
    

    return 0;
}