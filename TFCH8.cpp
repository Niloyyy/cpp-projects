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
        int n; cin >> n; 
        vector<int> v(n+1 , 0), pre(n+1 , 0);
        for(int i = 1 ; i <= n;i++){
        	cin >> v[i];
        	pre[i] = pre[i-1] + v[i];
        }
        for(int i = 1 ; i <= n;i++) cout << pre[i]<<" ";
        cout <<endl;	
        int m; cin >> m;
        int ans = INT_MIN;
        while(m--){
        	int mx;
        	int x1 , y1 , x2 , y2; cin >> x1 >> y1 >> x2 >> y2;
        	for(int i = x1 ; i <= y1; i++){
        		for(int j = x2 ; j <= y2; j++){
        			mx = pre[j] - pre[i-1];
        			ans = max(ans , mx);
        		}
        		//cout << mx<<endl;
        		//ans = max(ans , mx);
        	}
        	cout <<ans<<endl;
        }
    }
    return 0;
}