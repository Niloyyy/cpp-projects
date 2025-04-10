#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int fun(int n){
	if(n == 2) return 2;
	if(n <= 1) return 1;
	int wy = fun(n-1) + fun(n-2);
	return wy;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	cout<<fun(n)<<endl;
    }

    return 0;
}