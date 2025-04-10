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
    	int n; cin >> n;
    	int a[n] , b[n];
    	for(int i = 0 ; i < n;i++){
    		cin >> a[i];
    		b[i] = a[i];
    	}
    	sort(b , b + n);
    	bool f = false;
    	int mn = *min_element(a , a + n);
    	for(int i = 0 ; i < n;i++){
    		if(a[i] == b[i]) continue;
    		else if(a[i] % mn){
    			f = true; 
    			break;
    		}
    	}
    	f ? cout <<"NO\n" : cout<<"YES\n";
    }
    return 0;
}