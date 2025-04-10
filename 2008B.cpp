#include<bits/stdc++.h>
#define ll long long int
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
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , one = 0; cin >> n;
    	string s ; cin >> s;
    	for(auto c : s) one += (c == '1');
    	if((int)sqrt(n) * (int)sqrt(n) == n and one == 2 * (2 * sqrt(n) - 2)){
    		cout<<"YES\n";
    	}else{
    		cout<<"NO\n";
    	}
    
    }
    return 0;
}