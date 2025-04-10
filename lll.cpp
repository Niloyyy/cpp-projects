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
    	string s;cin >> s;
    	int sz  = s.size();
    	int l = 0 , r = sz-1;
    	bool ok = false;
    	int mx = INT_MIN;
    	for(int i = 0 ; i < sz;i++){
    		int ans;
    		for(int j = sz-1; j >= 0;j--){
    			if(s[i]==s[j]){
    				ans = j - i + 1;
    				l = i;
    				r = j;
    				ok = false;
    				while(r >= l){
    			    if(s[l] == s[r]){
    					l++;
    					r--;
    					ok = true;
    					//ans = r - l + 1;
    				}else{
    					ok = false;
    					break;
    				}
    			}

    			if(ok){
    				break;
    			}
    		}
    	  }
    	  mx = max(ans , mx);
	    }
	    cout<<mx;
    }
    return 0;
}