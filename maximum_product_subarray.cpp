#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    long long ans = LLONG_MIN , pre = 1 , suff = 1;
    vector<int>v(n);
    for(int i = 0 ; i < n;i++) cin >> v[i];
    for(int i = 0 ; i < n;i++){
    	if(pre == 0) pre = 1;
    	if(suff == 0) suff = 1;
    	pre *= v[i];
    	suff *= v[n - i - 1];
    	ans = max({suff , pre , ans});
    }
    cout << ans<<endl;
    
    return 0;
}
//4 3 -4 4 8 0 2 4 -3 0 1 1 2 