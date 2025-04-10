#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int mx1 = INT_MIN , mx2 = INT_MIN;
    for(int i = 1; i <= n;i++){
    	int x; cin >> x;
    	mx1 = max(mx1 , x);
    }
    for(int i = 1; i <= n;i++){
    	int x; cin >> x;
    	mx2 = max(mx2 , x);
    }
    cout<<mx1+mx2;
    

    return 0;
}