#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {-1 , 0 , 1 , 0};
int dc[] = {0 , 1 , 0 , -1};
int n , m;

void dfs(int r , int c , vector< vector<bool> > &vis){
	vis[r][c] = false;
	for(int i = 0 ; i < 4;i++){
		int nr = r + dr[i];
		int nc = c + dc[i];
		if(nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc]){
			dfs(nr , nc , vis);
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    //vector< vector<char> > arr(n , vector<char>(m));
    //queue< pair <int , int> > q;
    vector< vector<bool> > vis(n , vector<bool>(m , false));
    for(int i = 0 ; i < n;i++){
    	for(int j = 0 ; j < m;j++){
    		char ch;
    		cin >> ch;
    		//arr[i][j] = ch;
    		if(ch == '.'){
    			//q.push({i , j});
    			vis[i][j] = true;
    		}	
    	}
    }
    int rm = 0;
    for(int i = 0 ; i < n;i++){
    	for(int j = 0 ; j < m;j++){
    		if(vis[i][j]){
    			rm++;
    			dfs(i , j , vis);
    		}
    	}
    }
    cout << rm;

    
    return 0;
}