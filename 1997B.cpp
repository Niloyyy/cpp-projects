#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
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
    	int n; cin >> n;
    	int cnt = 0;
    	string s[2]; cin >> s[0] >> s[1];
    	for(int i = 1 ;i < n - 1;i++){
    		if(s[0][i-1] == '.' and s[0][i] == '.' and s[0][i+1] == '.' and s[1][i] == '.' and s[1][i-1] == 'x' and s[1][i+1] == 'x') cnt++;
    		if(s[1][i-1] == '.' and s[1][i] == '.' and s[1][i+1] == '.' and s[0][i] == '.' and s[0][i-1] == 'x' and s[0][i+1] == 'x') cnt++;
    	}
    	cout<<cnt<<endl;
    
    }
    return 0;
}