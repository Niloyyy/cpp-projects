#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mod = 1e9 + 7;
int dp[1001][1001] = {-1};
char g[1001][1001];
int n;

int f(int x , int y){
	int a = 0 , b = 0;
	if((x == n and y == n) or g[x][y] == '*')  return 1;
	//if(dp[x][y])
	if(x < n and g[x+1][y] != '*') a = f(x + 1 , y);
	if(y < n and g[x][y+1] != '*') b = f(x , y + 1);
	//dp[x][y] = a + b;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 1 ; i <= n;i++){
    	for(int j = 1 ; j <= n;j++) cin >> g[i][j];
    }
	cout<<f(1,1);
    

    return 0;
}