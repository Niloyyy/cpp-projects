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
    	int n , m; cin >> n >> m;
    	vector<vector<int>> v(m);
    	for(int i = 0 ; i < n; i++){
    		for(int j = 0 ; j < m;j++){
    			int x; cin >> x;
    			v[j].push_back(x);
    		}
    	}
    	for(int i = 0 ; i < m;i++){
    		sort(v[i].begin() , v[i].end() , greater<int>());
    	}
    	long long sum = 0;
    	for(int i = 0 ; i < m;i++){
    		for(int j = 0 ; j < n;j++){
    			sum += 1ll* v[i][j] * (n - j - 1ll);
    		}
    		for(int j = 1 ; j < n;j++){
    			sum -= 1ll* v[i][j] * j;
    		}
    	}
    	cout<<sum<<endl;
    }
    return 0;
}