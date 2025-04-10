#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n;
vector<pair<int,int>> v;

int bs(int s , int i){
	int l = i , r = n-1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(v[m].first <= s){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return l;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0 ; i < n;i++){
    	int x , y; cin >> x >> y;
    	v.push_back({x , y});
    }
    sort(v.begin() , v.end());
    long long ans = 0;
    for(int i = 0 ; i < n - 1;i++){
    	ans += bs(v[i].second , i + 1) - i - 1;
    }
    cout<<ans;
    return 0;
}