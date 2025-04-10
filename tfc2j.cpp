#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 500009;
vector<vector<int>>pre(N , vector<int>(26 , 0));

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; 
    string s; cin >> n >> s;
    for(int i = 1 ; i <= n;i++){
    	pre[i][s[i-1]-'a']++;
    	for(int j = 0 ; j < 26;j++){
    		pre[i][j] += pre[i-1][j];
    	}
    }
    int q; cin >> q;
    vector<vector<int>>old(26 , vector<int>()) , nw(26 , vector<int>());
    while(q--){
    	int t; cin >> t;
    	if(t == 1){
    		int i;
    		char z; 
    		cin >> i >> z;
    		old[s[i-1]-'a'].push_back(i);
    		nw[z-'a'].push_back(i);
    		s[i-1] = z;
    	}else{
    		int l , r; cin >>l >> r;
    		int ans = 0;
    		for(int j = 0 ; j < 26;j++){
    			int x = 0 , y = 0;
    			for(auto i : nw[j]){
    				if(i >= l and i <= r) x++;
    			}
    			for(auto i : old[j]){
    				if(i >= l and i <= r) y++;
    			}
    			if(pre[r][j] - pre[l-1][j] + x - y > 0) ans++;
    		}
    		cout<<ans<<endl;
    	}
    }

    

    return 0;
}