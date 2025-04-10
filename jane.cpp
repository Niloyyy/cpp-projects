#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 ,  0 , -1 ,  0};
int dc[] = { 0 , -1 ,  0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    for(int t = 1 ; t <= tc;t++){
            int n , m; cin >> n >> m;
        vector< vector<char> >grid(n , vector<char>(m));
        vector< vector<bool> >vis(n , vector<bool>(m , false));
        vector< vector<int> >chk(n , vector<int>(m , -1));

        queue< pair<pair<int , int> , int > >q; 
        queue< pair<int,int> >Q;
        for(int i = 0 ; i < n;i++){
            for(int j = 0 ; j < m;j++){
                cin >> grid[i][j];
                if(grid[i][j] == 'F'){
                    q.push({{i , j} , 0});
                    vis[i][j] = true;
                }
                if(grid[i][j] == '.'){
                    vis[i][j] = true;
                    chk[i][j] = 0;
                }
                if(grid[i][j] == 'J'){
                    Q.push({i , j});
                }
            }
        }
        //int t = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int tm = q.front().second;
            q.pop();
            for(int i = 0 ; i < 4;i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc] && grid[nr][nc] =='.'){
                    chk[nr][nc] = tm + 1;
                    vis[nr][nc] = false;
                    q.push({{nr , nc} , tm + 1});
                }
            } 
        }
 
        int ans = 1;
        bool flag = false;
        while(!Q.empty()){
            int step = 1;
            int r = Q.front().first;
            int c = Q.front().second;
            Q.pop();
            for(int i = 0 ; i < 4;i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 and nr < n and nc >= 0 and nc < m and grid[nr][nc] == '.'){
                    step++;
                    Q.push({nr , nc});

                }
                
                if(nr == 0 or nr == n-1 or nc == 0 or nc == m-1 ){
                    flag = true;
                    break;
                }
            }
        }

        

        for(int i = 0 ; i < n;i++){
            for(int j = 0 ; j < m;j++){
                cout << chk[i][j]<<" ";
            }
            cout <<endl;

        }
        cout <<"Case "<<t<<": ";
        if(flag and step > 1) cout << step<<endl;
        else cout <<"IMPOSSIBLE\n";
    }    
      
    return 0;
}