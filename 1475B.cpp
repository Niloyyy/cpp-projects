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
    	int mod = n % 2020;
    	int ano_mod = (n - mod * 2021) >= 2020 || (n - mod * 2021) ==0 ? (n - mod * 2021) % 2020 : -1; 
    	(mod >= 0 && ano_mod == 0) ? cout <<"YES\n" : cout <<"NO\n";
    }
    
    return 0;
}