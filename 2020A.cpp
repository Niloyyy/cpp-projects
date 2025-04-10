#include<bits/stdc++.h>
#define int long long int
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
const int inf = INT_MAX;
const int _inf = INT_MIN;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

// int po(int k , int x){
// 	int ans = 1;
// 	for(int i = 1 ;i <= x;i++) ans *= k;
// 	return ans;	
// }

int power(int a , int n){
	if(n == 0) return 1ll;
	int ans = 1ll;
	while(n){
		if(n & 1) ans = ans * a;
		a = a * a;
		n >>= 1;
	}
	return ans;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k , op = 0; cin >> n >> k;
    	if(k == 1){
    		cout<<n<<endl;
    		continue;
    	}
    	while(n){
    		op += n % k;
    		n /= k;
    	}
    	cout<<op<<endl;
    
    }
    return 0;
}