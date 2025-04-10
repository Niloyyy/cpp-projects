#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
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
    	int n , k ; cin >> n >> k; 
    	int a[n+1][n+1];
    	vector<string>s;
    	for(int i = 1 ; i <= n;i++){
    		string x; cin >> x;
    		s.push_back(x);
    	}
    	for(int i = 1; i <= n;i++){
    		string x = s[i-1];
    		for(int j = 1 ; j <= n;j++){
    			a[i][j] = (x[j-1]) - '0';
    		}
    	}
    	for(int i = 1 ; i <= n;i+=k){
    		for(int j = 1 ; j <= n;j+=k){
    			cout<<a[i][j];
    		}
    		cout<<endl;
    	}
    
    }
    return 0;
}