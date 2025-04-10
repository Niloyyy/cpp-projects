#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};


int ub(vector<int>&v , int n , long long target){
	int l = 0 , h = n-1 , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] < target){
			ans = m;
			l = m + 1;
		}else{
			l = m - 1;
		}
	}
	return ans;
}

int lb(vector<int>&v , int n ,  long long target){
	int l = 0 , h = n-1 , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] >= target){ //smallest index for a[i] >= target;
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n , q; cin >> n >> q;
    	vector<int>v(n);
    	for(auto &i : v) cin >> i;
    	sort(v.begin() , v.end());
   		while(q--){
   			int x; cin >> x;
   			int aa = lb(v , n , x);
   			int bb = aa - 1;
   			//cout<<aa<<" "<<bb<<endl;
   			if(aa == -1) cout<<abs(v[n-1] - x)<<endl;
   			else if(aa > 0){
   				cout << min(abs(v[aa]-x) , abs(v[bb]-x))<<endl;
   			}else{
   				cout<<abs(v[aa]-x)<<endl;
   			}
    	}

   	}
   		return 0 ;
}