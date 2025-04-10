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
        int ans = n; 
    	string a , b , c; cin >> a >> b >> c;
    	if(a == c || b == c){
            cout <<"NO\n";
        }else if(n==1){
            if(a == b && a!=c)
            cout <<"YES\n";
            else if( a != b) cout <<"YES\n";
        }else{
            for(int i = 0 ; i < n;i++){
                if(a[i] == b[i] && a[i] == c[i] && b[i] == c[i]) --ans;
                else if(a[i] != b[i]){
                    if(a[i] == c[i] || b[i] == c[i]) --ans;
                }

            }
            if(ans ) cout << "YES\n";
            else cout <<"NO\n";
        }
    }
    
    return 0;
}