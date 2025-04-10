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

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	map<int , long long> mp;
    	for(auto &u : v) cin >> u;
    	vector<int>u;
    	u = v;
    	sort(u.begin() , u.end());
    	long long sum = 0;	
    	for(int i = 0 ; i < n-1 ;i++){
    		if(u[i] != u[i+1]){
    			sum += u[i];
    			mp[u[i]] = sum; 
    		}else{
    			sum += u[i];
    		}
    	}
    	sum += u[n-1];
    	mp[u[n-1]] = sum;
    	//for(auto m : mp) cout<<m.first <<" "<<m.second<<endl;
    	int mx = *max_element(v.begin() , v.end());
    	for(int i = 0 ; i < n;i++){
    		cout<<mp[mx]-mp[v[i]]<<" ";
    	}	

    }
    return 0;
}