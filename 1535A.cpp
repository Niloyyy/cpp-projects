#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int a[4];
    	for(int i = 0 ; i < 4;i++) cin >> a[i];
    	int chai = max(a[0] , a[1]) + max(a[2] , a[3]);
        sort(a , a+4);
        int ache = a[2] + a[3];
        chai == ache ? cout << "YES\n" : cout <<"NO\n";
    }
    
    return 0;
}