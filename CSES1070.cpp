#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

long long ok(int m , vector<int>&v){
	long long ans = 0;
	for(int i = 0 ; i < v.size();i++){
		ans += abs(v[i]-m);
	}
	return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int>v(n);
    for(auto i = 0 ; i < n;i++){
    	cin >> v[i]; 
    }
    sort(v.begin() , v.end());
    int median = v[n/2];
    ll ans = 0;
    for(int i = 0 ;i < n;i++){
    	ans += abs(v[i]-median);
    }
    cout<<ans;
    return 0;
}