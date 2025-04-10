#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int ans = 0 , i = 1;
    while(i<=n){
    	ans ^= i;
    	i++;
    }
    cout << ans;
    return 0;
}