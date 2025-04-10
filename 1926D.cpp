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
    	map<int , int> m;
    	vector<int>v(n);
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x , v[i] = x , m[x]++;
    	}
    	for(auto i : v){
    		if(m[i]){
    			int com = 0;
    			for(int bit = 0 ; bit < 31; bit++){
    				if((i&(1<<bit)) == 0) com += (1<<bit);
    			}
    			if(m[com]){
    				n-- , m[com]-- , m[i]--;
    			}else m[i]--;
    		}
    	}
    	cout<<n<<endl;
    }
    return 0;
}