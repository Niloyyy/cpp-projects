#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};
vector<long long >di;

void d(ll n){
	ll ss = sqrt(n);
	for(ll i = 1; i <= ss; i++){
		if(n % i == 0){
			di.push_back(i);
			if(n / i != i) di.push_back(n/i);
		}
	}
}


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
    	ll n , k;
    	cin >> n >>k;
    	d(n);
    	sort(di.begin() , di.end());
    	//for(auto i : di) cout<< i<<" ";
    	int sz = di.size();

    	if(k > sz) cout<<-1;
    	else cout<<di[k-1];


    }
    return 0;
}