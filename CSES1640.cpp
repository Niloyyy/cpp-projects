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
int m;

bool bs(vector<int>&op , int x , int a){
	int l = 0 , r = op.size();
		while(l <= r){
		m = l + (r - l) / 2;
		if((x-a) == op[m]) return true;
		if(x-a > op[m]) l = m + 1;
		else r = m - 1;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n , x; cin >> n >> x;
    	vector<int>v(n) , op(n);
    	for(auto &i : v) cin >> i;
    	map<int ,int>mp;
    	for(int i = 0 ; i < n;i++){
    		mp[v[i]] = i+1;
    	}	
    	op = v;
    	sort(op.begin() , op.end());
    	for(int i = 0 ; i < n;i++){
    		if(bs(op , x , v[i])){
    			if(i+1 != mp[op[m]]){
    				cout<<i+1<<" "<<mp[op[m]];
    				return 0;
    			}
    		} 
    	}
    	cout<<"IMPOSSIBLE";

    }
    return 0;
}