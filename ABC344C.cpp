#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

bool is_possible(vector<int>&v , int x){
	int l = 0  , r = v.size()-1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(v[m] == x) return true;
		if(v[m] <= x){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m , l ; cin >> n;
    vector<int>a(n);
    for(auto &i : a) cin >> i;	
    cin >> m;
	vector<int>b(m);
    for(auto &i : b) cin >> i;
    cin >> l;
    vector<int>c(l);
    for(auto &i : c) cin >> i;
    vector<int>sum;
    for(int i = 0 ; i < n;i++){
    	for(int j = 0 ; j < m;j++){
    		for(int k = 0 ; k < l ;k++){
    			sum.push_back(a[i]+b[j]+c[k]);
    		}
    	}
    }
    sort(sum.begin() , sum.end());
    //for(auto i : sum) cout<<i<<" ";
    int q; cin >> q;
    while(q--){
    	int x; cin >> x;
    	is_possible(sum , x) ? cout<<"Yes\n" : cout<<"No\n";
    }

    	
    return 0;
}