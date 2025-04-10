#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

bool possible(int m , vector<int> &v , int k){
	int cnt = 1;
	int last = v[0];
	//cout<<v.size()<<endl;
	//for(auto i : v) cout<<i<<" ";
	for(int i = 1 ; i < v.size() ; i++){
		if((v[i] - last) >= m){
			cnt++;
			//cout<<v[i]<<" "<<last<<endl;
			last = v[i];	
		}
	}
	return cnt >= k;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k , m; cin >> n >> k;
    	vector<int>v(n);
    	for(auto i = 0 ; i < n;i++) cin >> v[i];
    	sort(v.begin(), v.end());
    	int ans;
    	int l = 0 , r = v[v.size()-1] - v[0];
    	while(l <= r){
    		m = l + (r - l) / 2;
    		if(possible(m , v , k)){
    			ans = m;
    			l = m + 1;
    		}else{
    			r = m - 1;
    		}
    	}
    	cout<<ans<<endl;
    	//possible(3 , v , k);
    }
    return 0;
}