#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<int,int>mp(n);
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	mp[x]++;
    	int cnt = mp[x].second;
    	v.push_back(make_pair(x,cnt));
    }
    
    return 0;
}