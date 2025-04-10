#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

bool bs(vector<int> &v , int n, int val, int x){
	int l = 0 , r = n-1 , m;
	while(r >= l){
		m = (r + l) / 2;
		if(v[m] - val == x) return true;
        if(v[m] - val > x){
            r = m - 1;
        }else{
            l = m + 1;
        }
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x; cin >> n >> x;
    vector<int>v(n);
    for(int i = 0 ; i < n;i++) cin >> v[i];
    sort(v.begin() , v.end());
    bool ans = false;
    for(int i = 0 ; i < n;i++){
    	ans = bs(v , n , v[i] , x);
    	if(ans) break;
    }
    ans ? cout <<"Yes" : cout <<"No"; 	
    
    return 0;
}