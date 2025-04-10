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
    	int n , k; cin >> n >> k;
    	vector<int>u(n) , v;
    	map<int , int>mp;
    	set<int>se;
    	for(auto &v : u){
    		cin >> v;
    		mp[v]++;
    		se.insert(v);
    	}
    	//cout<<mp[2];
    	//sort(v.begin(),v.end());
    	for(auto i : se){
    		v.push_back(i);
    	}
    	long long ans = 0;

    	for(int i = 0 , j = 1 ; i < se.size()-1 , j < se.size(); ){
    		if(mp[v[i]] and mp[v[j]]){
    			ans +=  (v[i]-v[j]) < 0 ? ((v[i]-v[j]) + k) : (v[i]-v[j]) % k;
    			mp[v[i]]--;
    			//mp[v[j]] -= 1;
    		}
    		if(mp[v[j]]==0){
    			j++;
    		}else if(!mp[v[i]]){
    			i++;
    			j++;
    		}
    	}
    	if(mp[v[n-1]] > 2){
    		ans += (v[se.size()-1]-v[se.size()]) % k; 
    	}
    	cout<<ans;	


    }
    return 0;
}
//6
//1 3 2 3 2 3
//4
//1 3 2 4 2 4 3 4 3 4 3