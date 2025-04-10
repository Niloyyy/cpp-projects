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
int mod(int it , int th , int n){
	if((it - th) <= 0)  return (it - th + n);
	else return (it - th);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m , x; cin >> n >> m >> x;
    	vector<set<int>>v(m+1);
    	v[0].insert(x);
    	int curr = 0;
    	for(int step = 1 ; step <= m ; step++){
    		int thr; cin >> thr;
    		char c ; cin >> c;
    		//cout<<c<<endl;
    		if(c == '0'){
    			for(auto it : v[curr]){
    				if(thr + it > n)
    					v[curr+1].insert((thr+it + 1) % (n+1));
    				else 
    					v[curr+1].insert((thr+it) % (n+1));
    			}
    		}else if(c == '1'){
    			for(auto it : v[curr]){
    				v[curr+1].insert(mod(it , thr , n));
    			}
    		}else{
    			for(auto it : v[curr]){
    				v[curr+1].insert(mod(it , thr , n) );
    				if(thr + it > n)
    					v[curr+1].insert((thr+it + 1) % (n+1));
    				else 
    					v[curr+1].insert((thr+it) % (n+1));
    			}
    		}
    		curr++;
    	}

    	//cout<<mod(6 , 3 , 9 );
    	cout<<v[m].size()<<endl;
    	for(auto it : v[m]) cout<<it<<" ";
    	cout<<endl;	

    }
    return 0;
}