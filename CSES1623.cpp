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

    int n; cin >> n;
    vector<int>v(n);
    for(auto &i : v) cin >> i;
    long long ans = LLONG_MAX;	
    for(int i = 0 ; i < (1 << n);i++){
    	long long sum1 = 0 , sum2 = 0 ;
    	for(int bit = 0 ; bit < n;bit++){
    		(i & (1 << bit)) ? sum1 += v[bit] : sum2 += v[bit];
    	}
    	ans = min(ans , sum1 > sum2 ? sum1-sum2 : sum2-sum1);
    }
    cout<<ans;	
    return 0;
}