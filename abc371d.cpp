#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
#define int long long
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int ub(vector<int>&v , int n , long long target){
	int l = 1 , h = n , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] >= target){
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

int lb(vector<int>&v , int n ,  long long target){
	int l = 1 , h = n , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] <= target){ //smallest index for a[i] >= target;
			ans = m;
			l = m + 1;
		}else{
			h = m - 1;
		}
	}
	return ans;
}



int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n , q; cin >> n;
    	map<int,int>range;
    	vector<int>x(n+1 , 0) , vil(n+1 , 0);
    	for(int i = 1 ; i <= n;i++){
    		cin >> x[i];
    	}
    	for(int i = 1 ; i <= n;i++){
    		int p; cin >> p;
    		range[x[i]] = p;
    	}
    	for(int i = 2 ; i <= n;i++) range[x[i]] += range[x[i-1]];
    	// for(auto i : range) cout<<i.second<<' ';
    	// cout<<endl;	
    	cin >> q;
    	x[0] = *min_element(x.begin() , x.end()) - 1;
   		while(q--){
   			int l , r; cin >> l >> r;
   			int i = ub(x , n , l);
   			int j = lb(x , n , r);
   			cout<<range[x[j]] - range[x[i-1]]<<endl;
   			//cout<<x[i]<<' '<<x[j]<<endl;
   		}
    
    }
    return 0;
}