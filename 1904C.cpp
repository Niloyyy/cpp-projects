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

long long bs(long long x , int n,  long long a[]){
	int l = 0 , r = n-1; 
	while(l <= r){
		int m = l + (r - l) / 2;
		if(a[m] - x >= 0){
			r = m - 1;
		}else{
			l = m + 1;
		}
	}
	if(r < 0) return a[l]-x;
	if(l >= n) return x-a[r];
	else return min(a[l]-x , x-a[r]);
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	long long a[n];
    	for(int i = 0 ; i < n;i++){
    		cin >> a[i];
    	}
    	long long ans = *min_element(a , a + n);
    	if(k > 2) ans = 0;
    	else{
    		sort(a , a + n);
    		if(k == 1){
    			for(int i = 1 ; i < n;i++){
    				ans = min(ans , a[i] - a[i-1]);
    			}
    		}else{
    			for(int i = 1 ;i < n;i++){
    				ans = min(ans , a[i] - a[i-1]);
    			}
    			for(int i = 0 ;i < n;i++){
    				for(int j = i+1 ; j < n;j++){
    					ans = min(ans , bs( a[j] - a[i] , n ,  a));
    				}
    			}
    		}
    	}
    	cout<<ans<<endl;
    
    }
    return 0;
}
