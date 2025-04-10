
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

void dfs(int r , int c  , vector< vector<bool> > &vis , vector< vector<char> > &grid ){
    int m = grid.size();
    int n = grid[0].size();

    vis[r][c] = false;
    for(int i = -1 ; i <= 1 ; i++){
        for(int j = -1 ; j <= 1;j++){
            int nr = r + i;
            int nc = c + j;
            if(nr >= 0 && nr < m && nc >= 0 && nc < n && vis[nr][nc]){
                dfs( nr , nc , vis , grid);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int tc = 1; cin >> tc;
    //while(tc--){
        while(1){
            int m , n; cin >> m >> n;
            if(m==0) break;
            vector< vector<char> > grid(m , vector<char>(n));
            vector< vector<bool> > vis(m , vector<bool>(n,false));

            for(int i = 0 ;i < m;i++){
                for(int j = 0 ; j < n;j++){
                    cin >> grid[i][j];
                    if(grid[i][j] == '@'){
                        vis[i][j] = true;
                    }
                }
            }
            int cnt = 0;

            for(int i = 0 ;i < m;i++){
                for(int j = 0 ; j < n;j++){
                    if(vis[i][j] && grid[i][j] == '@'){
                            cnt++;
                            dfs(i , j , vis , grid);      
                    }
                }
            }


            cout << cnt <<endl;

        }



    //}
    return 0;
}
