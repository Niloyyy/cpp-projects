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

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector< pair<int , int> > v;
    	for(int i = 0 ; i < n;i++){
    		int x , y; cin >> x >> y;
    		v.push_back({x , y});
    	}
    	double ans = 0;
    	for(int i = 1 ; i + 1 < n;i++){
    		double y1 = v[i-1].s , y2 = v[i+1].s , y = v[i].s;
    		double x1 = v[i-1].f , x2 = v[i+1].f , x = v[i].f;
    		if(y1 > y and y2 > y){
    			if(y1 > y2){
    				double xp = (x - x1) * ( y2 - y) / (y - y1) + x;
    				double yp = y2;
    				//cout<<xp<<' '<<yp<<endl;
    				ans += 0.5 * fabs(1.0L * (xp * y + x * y2 + x2 * yp) - 1.0L * (yp * x + y * x2 + y2 * xp));
    			}else if(y1 < y2){
    				double xp = (x - x2) * ( y1 - y) / (y - y2) + x;
    				double yp = y1;
    				//cout<<xp<<' '<<yp<<endl;
    				ans += 0.5 * fabs(1.0L * (xp * y + x * y1 + x1 * yp) - 1.0L * (yp * x + y * x1 + y1 * xp));
    			}else{
    				ans += 0.5 * fabs(1.0L * (x1 * y + x * y2 + x2 * y1) - 1.0L * (x * y1 + y * x2 + y2 * x1));
    			}
    		}
    	}
    	printf("%.8lf\n" , ans);
    }
    return 0;
}