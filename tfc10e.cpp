#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int r , c; cin >> r>>c;
        vector< vector<char> >grid(r , vector<char>(c));
        vector< vector<bool> >vis(r , vector<bool>(c));
        queue< pair<int , int> >q;
        for(int i = 0 ;i < r;i++){
        	for(int j = 0 ;j < c;j++){
        		cin >> grid[i][j];
        		if(grid[i][j] == '#'){
        			vis[i][j] = true;
        			q.push({i , j});
        		}else vis[i][j] = false;
        	}
        }
        int ans = INT_MIN;

        while(!q.empty()){
        	int n = q.front().first;
        	int m = q.front().second;
        	q.pop();
        	int ti = 1;
        	int level = 0;
        	while(1){
        		bool ok = false;
        		for(int i = 0 ; i < 4;i++){
        			if(dr[i]<0)
        			int in = n + ti+dr[i];
        			int im = m + ti+dc[i];
        			if(in >= 0 and in < r and im >= 0 and im < c and grid[in][im] == '#'){
        				ok = true;
        			}else{
        				//ans = max(ans  , level);
        				//break;
        				ok = false;
        			}
        		}
        		if(ok){
        			level++;
        			ti++;
        		}else break;
        	}
        	ans = max(ans  , level);
        }

        // for(int i = 0 ;i < r; i++){
        // 	for(int j = 0 ; j < c; j++){
        // 		if()
        // 	}
        // }
        cout << ans<<endl;


    }
    return 0;
}