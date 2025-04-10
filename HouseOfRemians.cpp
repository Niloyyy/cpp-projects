#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n+1];
    long long ans = 0;
    for(int i = 1 ; i <= n;i++) cin >> a[i];
    sort(a + 1 , a + n + 1 , greater<int>());
    for(int i = 1 ; i < n;i++){
    	ans += 1ll * a[i] * (n-i);
    }
    for(int i = 2 ; i <= n;i++){
    	ans -= 1ll * a[i] * (i-1);
    }	
    cout << ans <<endl;
    return 0;
}