#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , x; cin >> n >> x;
    vector<int>a(n) , b(n);
    for(int i = 0 ; i < n;i++){
    	cin >> a[i] >> b[i];
    }
    set<int>ans;
    ans.insert(0);
    for(int i = 0 ; i < n;i++){
    	set<int>all;
    	for(auto nw : ans){
    		if( nw + a[i] <= x) all.insert(nw+a[i]);
    		if( nw + b[i] <= x) all.insert(nw+b[i]);
    	}
    	ans = all;
    }
    bool ache = ans.find(x) != ans.end();
    cout<<(ache ? "Yes" : "No");

    return 0;
}