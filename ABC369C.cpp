#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<int>v(n + 5);
    for(int i = 1 ; i <= n;i++) cin >> v[i];
    if(n < 3){
    	cout<< n * (n + 1) / 2<<endl;
    	return 0;
    }
    int p1 = 1 , p2 = 3 , d = v[2] - v[1];
    long long ans = n;
    while(p2 <= n){
    	if(v[p2] - v[p2-1] == d){
    		p2++;
    		continue;
    	}else{
    		int x = p2 - p1;
    		ans += 1ll * x * (x - 1) / 2;
    		p1 = p2 - 1;
    		d = v[p2] - v[p1];
    	}
    }
    int x = p2 - p1 - 1;
    ans += 1ll * x * (x + 1) / 2; 
    cout<<ans;
    return 0;
}