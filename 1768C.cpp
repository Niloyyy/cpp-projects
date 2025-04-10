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
const int N = 2e5 + 9;
int v[N];
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int> p , q , carry;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		v[x]++;
    	}
    	bool ans = true;
    	int rem = 0;
    	for(int i = n ; i > 0 ;i--){
    		if((v[i] == 0 and rem == 0) or v[i] > 2){
    			ans = false;
    			break;
    		}else if(v[i]  == 2) rem++;
    		else if(v[i] == 0 and rem > 0) rem--; 
    	}	

    return 0;
    }
}