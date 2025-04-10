#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int>v(n) , ans(n);
    for(auto &i : v) cin >> i;
  	set<int>s;
  	for(int i = n-1 ; i >= 0 ;--i){
  		ans[i] = s.size();
  		while(s.size() and *s.begin() < v[i]) s.erase(s.begin());
  		s.insert(v[i]);
  	}
  	for(auto i : ans) cout<<i<<' ';
    return 0;
}