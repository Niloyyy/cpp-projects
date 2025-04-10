#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int>v(n);
        for(int i = 0 ; i < n;i++) cin >> v[i];
        sort(v.begin() , v.end());
        int ans = n;
        for(int i = 0 ; i < n/2 ;i++) v[i] != v[i+(n+1)/2] ? ans -= 2 : ans = ans;  
        cout << ans <<endl; 
    }
    return 0;
}