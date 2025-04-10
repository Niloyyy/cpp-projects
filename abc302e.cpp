#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 3e5 + 9;
vector<set<int>>vtx(N);
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int q; cin >> q;
    int cnt = n;
    while(q--){
    	int typ; cin >> typ;
    	if(typ == 1){
    		int u , v; cin >> u >> v;
    		if(vtx[u].empty()) cnt--;
    		if(vtx[v].empty()) cnt--;
    		vtx[u].insert(v);
    		vtx[v].insert(u);
    	}else{
    		int u; cin >> u;
    		for(auto i : vtx[u]){
    			if(vtx[i].find(u) != vtx[i].end()){
    				vtx[i].erase(u);
    				if(vtx[i].empty()) cnt++;
    			}
    		}
    		if(!vtx[u].empty()) cnt++;
    		vtx[u].clear();
    	}
    	cout<<cnt<<endl;
    }	
    return 0;
}