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
    	int n; cin >>n;
    	vector<int>v(n);
    	for(auto &u : v) cin >> u;
    	int op = 0;
    	for(int i = 0 ; i < n; ){
    		if(v[i] == 0){
    			//cout<<i<<endl;
    			i++; 
    			continue;
    		}
    		if(v[i] <= 2 and n - i > 1 and v[i+1] <= 2 and v[i+1]){
    			op++;
    			i += 2;      
    		}else if(v[i] <= 2 and i + 1 != n){
    			int s = i;
    			while(++i < n and v[i] and v[i] <= 4){
    				if(v[i] <= 2) break;
    			}
    			//cout<<i<<endl;
    			if(v[i] <= 2 and v[i] and (i - s) % 2) op += (i - s);
    			else op += ((i == n or !v[i]) ? --i - s + 1 : i - s + 1);
    			//cout<<i<<' '<<s<<endl;
    			i++;
    		}else {op++; i++;}
    	}
    	cout<<op<<endl;	
    }
    return 0;
}