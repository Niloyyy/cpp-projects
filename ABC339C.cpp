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
    	ll ans = 0;
    	ll passengers = 0 , sum = 0;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		passengers += x;
    		sum += x;
    		if(passengers < 0){
    			ans += (-passengers);
    			passengers = 0;
    		}
    	}	
    	cout<<ans+sum;
    }
    return 0;
}