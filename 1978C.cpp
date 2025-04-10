#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	long long n , k; cin >> n >> k;
    	long long m = n / 2;
    	vector<int>p(n+1);
    	for(int i = 1 ; i <= n;i++) p[i] = i;
    	if(n & 1){
    		if(1LL * 2 * m * m + 1ll* 2 * m >= k and !(k&1)){
    			cout<<"YES\n";
    			for(int i = 1 , j = n ; i < j ;i++){
    				if(k >= 2 * (j - i)){
    					k -= 2 * (j - i);
    					swap(p[i] , p[j]);
    					j--;
    				}
    			}
    			for(int i = 1 ; i <= n;i++) cout<<p[i]<<' ';
    			cout<<endl;	
    		}else{
    			cout<<"NO\n";
    		}
    	}else{
    		if(1ll * 2 * m * m >= k and !(k&1)){
    			cout<<"YES\n";
    			for(int i = 1, j = n ; i < j ;i++){
    				if(k >= 2 * (j - i)){
    					k -= 2 * (j - i);
    					swap(p[i] , p[j]);
    					j--;
    				}
    			}
    			for(int i = 1 ; i <= n;i++) cout<<p[i]<<' ';
    			cout<<endl;	
    		}else{
    			cout<<"NO\n";
    		}
    	}
    
    }
    return 0;
}