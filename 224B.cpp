#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , k ; cin >> n >> k;
    vector<int>v(n+1) , un(n+1 , 0);
    map<int,int>mp , fr;
    for(int i = 1 ; i <= n;i++){
    	cin >> v[i];
    	mp[v[i]]++;
    	fr[v[i]] = 1;
    }
    for(int i = 1 ; i <= n;i++){
    	if(fr[v[i]]){
    		un[i] = un[i-1] + 1;
    		fr[v[i]] = 0;
    	}else un[i] = un[i-1];
    }
    //for(int i = 1 ; i <= n;i++) cout<<un[i]<<' ';
    int l = 1 , r = n;
    while(l <= r){
    	if(v[l] == v[l+1]) l++;
    	if(v[r] == v[r-1]) r--;
    	if(mp[v[l]] > mp[v[r]] and v[r] - v[l] > k){
    		mp[v[l++]]--;
    	}else if(mp[v[l]] < mp[v[r]] and v[r] - v[l] > k){
    		mp[v[r--]]--;
    	}
    }
    l <= r ? cout<<l<<' '<<r : cout<<-1<<' '<<-1;
    return 0;
}