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
    	string s; cin >> s;
    	int one = 0;
    	for(int i = 0 ; i < n;i++){
    		if(s[i] == '1') one++;
    	}
    	//cout<<one;
    	if(n == 2 and one == 2) cout<<"NO\n";
    	else if(one&1){
    		cout<<"NO\n";
    	}else{
    		if(one == 2){
    			bool f = true;
    			for(int i = 1 ; i < n;i++){
    				if(s[i] == '1' and s[i-1] == '1'){
    					cout<<"NO\n";
    					f = false;
    					break;
    				}
    			}
    			if(f) cout<<"YES\n";
    		}
    		else cout<<"YES\n";
    	}
    }
    return 0;
}