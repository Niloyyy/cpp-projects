#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;
using tup = tuple<int , int , int>;
const int N = 1005;
int64_t arr[N][N];
vector<int64_t>row(N) , col(N);

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m; cin >> n >> m;
    	string s; cin >> s;
    	for(int i = 1 ; i <= n;i++){
    		for(int j = 1 ; j <= m;j++){
    			cin >> arr[i][j];
    			row[i] += arr[i][j];
    			col[j] += arr[i][j];
    		}
    	}
    	int i = 1 , j = 1;
    	for(int sz = 0 ; sz < s.size();sz++){
    		if(s[sz] == 'R'){
    			arr[i][j] = -col[j];
    			col[j] = 0;
    			row[i] += arr[i][j];
    			j++;
    		}else{
    			arr[i][j] = -row[i];
    			row[i] = 0;
    			col[j] += arr[i][j];
    			i++;
    		}
    	}
    	arr[i][j] = -row[i];
    	for(int i = 1 ; i <= n;i++){
    		for(int j = 1 ; j <= m;j++){
    			cout << arr[i][j] << ' ';
    		}
    		cout<<endl;
    	}
    	for(int i = 0 ; i < N;i++){
    		row[i] = 0;
    		col[i] = 0;
    	}
    }
    return 0;
}