#include<bits/stdc++.h>
using namespace std;
const int inf = INT_MIN;
vector< vector<int> >adj; 

int main(){
	int node , edge;
	//scanf("%d %d", &node , &edge);
	cin >>  node >> edge;
	long long weight[node+1][node+1];
	for(int i = 1 ; i <= node;i++){
		for(int j = 1 ; j <= node;j++){
			i == j ? weight[i][j] = 0 : weight[i][j] = inf;
		}
	}

	for(int i = 0 ; i < edge;i++){
		int u , v , w; cin >> u >> v >> w;
		//adj[u].push_back(v);
		//adj[v].push_back(u);
		//scanf("%d %d %d", &u , &v , &w);
		weight[u][v] = w;
		//weight[v][u] = inf;
	}

	for(int k = 1 ; k < node-1;k++){
		for(int i = 0 ; i < node;i++){
			for(int j = 0 ; j < node;j++){
				weight[i][j] = max(weight[i][j] , weight[i][k] + weight[k][j]);
			}
		}
	}
	cout<<weight[0][node-1];
	return 0;
}