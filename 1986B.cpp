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

bool is_valid(int x , int y , int n , int m){
	if(x >= 0 and x < n and y >= 0 and y < m) return true;
	return false;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m; cin >> n >> m;
    	int a[n][m];
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			cin >> a[i][j];
    		}
    	}
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			vector<int>vodka;
    			bool f = false;
    			for(int r = -1 ; r <= 1 ;r++){
    				for(int c = -1 ; c <= 1;c++){
    					if(!f and abs(r) != abs(c) and is_valid(i+r , j+c , n , m) and a[i][j] > a[i+r][j+c]) vodka.push_back(a[i+r][j+c]);
    					else f = true;
    				}
    				if(f) break;
    			}
    			if(f) continue;
    			int mx = INT_MIN;
    			for(auto i : vodka) mx = max(mx , i);
    			//cout<<endl;	
    			if(vodka.size()) a[i][j] = mx; 
    		}
    	}
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			cout << a[i][j] <<' ';
    		}
    		cout<<endl;
    	}
    
    }
    return 0;
}