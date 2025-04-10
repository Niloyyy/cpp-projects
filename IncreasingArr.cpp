	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	#define endl '\n'

	int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    ll n , cnt = 0; cin >> n;
	    int a[n] , b[n];
	    for(int i = 0 ; i < n;i++){
	    	cin >> a[i];
	    	b[i] = a[i];
	    	if(i == 0) continue;
	    	if(a[i-1] > a[i]) a[i] = a[i-1];
	    }

	     for(int i = 0 ; i < n;i++){
	    	cnt += a[i] - b[i];
	    }

	    cout << cnt;
	    
	    return 0;
	}