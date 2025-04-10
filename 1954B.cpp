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
    	vector<int>v(n);
    	LR(0 , n-1) cin >> v[i];
    	int ans = INT_MAX;
    	for(int i = 0 ; i < n;i++){
    		if(v[i] != v[0]){
    			int cnt_l = 0  , cnt_r = 0, l = i-1 , r = i+1;
    			while(l >= 0 and v[l] == v[0]){
    				cnt_l++;
    				l--;
    			}
    			//cout<<r<<endl;
    			while(r < n and v[r] == v[0]){
    				cnt_r++;
    				r++;
    			}
    			ans = min({cnt_l , cnt_r , ans});
    		}
    		
    	}
    	if(ans == 0 or ans == INT_MAX) cout<<-1<<endl;
    	else cout<<ans<<endl;
    }
    return 0;
}