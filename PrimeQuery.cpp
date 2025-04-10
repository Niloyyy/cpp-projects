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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>fre_one(n+1 , 0) , fre_zero(n+1 , 0);
    	int zero = 0 , one = 0;
    	for(int i = 1 ; i <= n;i++){
    		int x ; cin >> x;
    		if(x == 0) zero++;
    		if(x == 1) one++;
    		fre_zero[i] = zero;
    		fre_one[i] = one;
    	}
    	int q; cin >> q;
    	while(q--){
    		int l , r; cin >> l >> r;
    		cout<<(1LL*(r - l + 1) * (r - l) / 2 - 1LL*(fre_zero[r] - fre_zero[l-1] - 1 ) * (fre_zero[r] - fre_zero[l-1]) / 2 - 1LL*(fre_zero[r] - fre_zero[l-1]) * (fre_one[r] - fre_one[l-1]))<<endl;
    	}

    }
    return 0;
}