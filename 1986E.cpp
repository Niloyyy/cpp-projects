#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int k;
inline bool cmp(int a , int b){
    if(a % k == b % k) return a < b;
    return a % k < b % k;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n ; cin >> n >> k;
    	map<int , int> mp;
        vector<int>v(n);
    	for(int i = 0 ; i < n;i++) {
    		cin >> v[i];
    		mp[v[i] % k]++;
    	}
        int odd_occ = 0;	
        for(auto m : mp){
            if(odd_occ > 1){
                cout<<-1<<endl;
                continue;
            }
            if(m.second % 2) odd_occ++;
        }
    	sort(v.begin() , v.end() , cmp);
        for(auto i : v) cout<<i<<' ';
    
    }
    return 0;
}