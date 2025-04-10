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

    int tc , t = 1; cin >> tc;
    while(tc >= t++){
    	int n ; cin >> n;
    	int ans = n;
    	vector<int>a(n) , b(n);
    	for(auto &i : a) cin >> i;
    	for(auto &i : b) cin >> i;
    	int i , j;	
    	for(i = 0 , j = 0; i < n and j < n;){
    		if(a[i] == b[j]){
    			i++ , j++;
    		}else{
    			while(b[++j] != a[i] and j < n){
    			}
    			ans = min(j - i , ans);
    			i++ ;
    		}
    	}
    	cout<<min(ans , j - i)<<endl;	
    }
    return 0;
}