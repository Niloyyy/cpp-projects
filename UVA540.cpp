#include <bits/stdc++.h>
using namespace std;

void Levels(vector< vector<int> >&graph, int V, int x , vector<int>&leaf){
	int level[V+1];
	bool marked[V+1];
    queue<int> que;
	que.push(x);
	level[x] = 0;
	marked[x] = true;

	while (!que.empty()) {
		x = que.front();

		que.pop();

		for (int i = 0; i < graph[x].size(); i++) {

			int b = graph[x][i];

			if (!marked[b]) {
				que.push(b);
				level[b] = level[x] + 1;
				marked[b] = true;
			}
		}
	}

	// cout << "Nodes"
	// 	<< " "
	// 	<< "Level" << endl;
    int sz = leaf.size();
	for (int i = 0 ; i < sz; i++){
        int val = leaf[i];
        cout <<level[val]<<" ";
        //if(level[val] % 2 == 1) return true;
    }
    cout <<endl;
    //return false;
		//cout << " " << i << " --> " << level[i] << endl;
}

int main(){
	int tc; cin >> tc;
    for(int t = 1 ; t <= tc;t++){
        int n , m , x; cin >> n >> m >> x;
        vector< vector<int> > graph;
        graph.assign(n+1 , vector<int>() );

        vector<int>leaf;
        while(m--){
            int u , v; cin >> u >> v;
            graph[u].push_back(v);
        }
        for(int i = 1 ; i <= n;i++){
            if(graph[i].empty()){
                leaf.push_back(i);
            }
        }
        // if(Levels(graph , n , x , leaf)){
        //     cout << "Case "<<t++<<": "<<"Yes\n";
        // }else{
        //     cout << "Case "<<t++<<": "<<"No\n";
        // }
        Levels(graph , n , x , leaf);

    }
	return 0;
}
