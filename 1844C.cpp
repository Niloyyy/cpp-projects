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
    	int n; cin >> n;
    	vector<long long>c(n); 
    	for(auto &i : c) cin >> i;
    	long long best_1 = 0 , best_2 = 0;	
    	for(int i = 0 ; i < n;i+=2){
    		best_1 += max(c[i] , 0ll);
    	}
    	for(int i = 1 ; i < n;i+=2){
    		best_2 = max(c[i] , 0ll);
    	}
    	(best_1 == 0 and best_2 == 0) ? cout<<*max_element(c.begin() , c.end())<<endl : cout<<max(best_1 , best_2)<<endl;
    }
    return 0;
}