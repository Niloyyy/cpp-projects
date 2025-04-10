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
		if(v[m] > target){
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
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

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	for(auto &i : v) cin >> i;
    	
    		bool f = false;
    		for(int i = 1 ; i < n - 1 ; i++){
    			if(v[i-1] > 0 and (v[i] / v[i-1]) < 2){
    				f = true;
    				//cout<<"a";
    				break;
    			}
    			else if(v[i-1] and v[i+1] and v[i]){
    				if( (v[i] / min(v[i-1] , v[i+1])) >= 2){
    					v[i] -= 2*min(v[i-1] , v[i+1]);
		    			int a = v[i-1] , b = v[i+1];
		    			v[i+1] -= min(a , b);
		    			v[i-1] -= min(a , b);
    				}else{
		    			int a = v[i] / 2;
		    			v[i+1] -= a;
		    			v[i-1] -= a;
		    			v[i] -= a*2;
    				}
	    			
    			}    		
    		}
    		if(f) cout<<"NO\n";
    		else{
    			bool chk = true;
    			for(auto i : v){
    				if(i){
    					cout<<"NO\n";
    					chk = false;
    					break;
    				}
    			}
    			if(chk) cout<<"YES\n";
    		}
    	}
    
    return 0;
}