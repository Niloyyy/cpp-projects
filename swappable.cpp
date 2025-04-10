	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	#define endl '\n'

	int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    int n; cin >> n;
	    map<int , int>mp;
	    vector<int> v;
	    for(int i = 0 ; i < n;i++){
	    	int x; cin >> x;
	    	mp[x]++;
	    }
	    v.push_back(0);
	    for(auto x : mp){
	    	int a = x.second;
	    	v.push_back(a);
	    }
	    int x = v.size();
	    vector<ll>save(x);

	    for(int i = 1 ; i < v.size() ;i++){
	    	save[i] = v[i] + save[i-1]; 
	    }
	    ll ans = 0;
	    int y = v.size() - 1;
	    for(int i = 1 ; i < v.size();i++){
	    	ans += v[i] * (save[y] - save[i]);
	    }
	    cout << ans;
	    
	    return 0;
	}