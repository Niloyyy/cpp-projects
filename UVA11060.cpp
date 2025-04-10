#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
map<string , int>mp;
map<int , string>rev;
vector<int>g[105];

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    bool f = 1;
    while(!cin.eof()){
    	int n ; cin >> n;
    	if(cin.eof()) break;
    	for(int i = 1 ; i <= n;i++){
    		string s; cin >> s;
    		mp[s] = i;
    		rev[i] = s;
    	}
    	int m; cin >> m;
    	for(int i = 0 ; i < m;i++){
    		string u , v; cin >> u >> v;
    		g[mp[u]].push_back(mp[v]);
    	}
    	vector<int>indegree(n+1 , 0);
    	priority_queue<int , vector<int> , greater<int>>q;
    	for(int i = 1 ; i <= n;i++){
    		for(auto it : g[i]){
    			indegree[it]++;
    		}
    	}
    	for(int i = 1 ; i <= n;i++){
    		if(indegree[i] == 0) q.push(i);
    	}
    	vector<int>ans;
    	while(!q.empty()){
    		int x = q.top();
    		ans.push_back(x);
    		q.pop();
    		for(auto it : g[x]){
    			indegree[it]--;
    			if(indegree[it] == 0) q.push(it);
    		}
    	}
    	cout<<"Case #"<<t++<<": Dilbert should drink beverages in this order:";
    	for(int i = 0 ; i < ans.size();i++){
    		cout<<' '<<rev[ans[i]];
    	}
    	cout<<".\n"<<endl;
    	for(int i = 0 ; i < 105;i++) g[i].clear();
    	mp.clear();
    	rev.clear();	
    }
    return 0;
}