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
        if(n&1) cout <<"NO\n";
        else if((n&(n-1))==0) cout <<"YES\n";
        else{
            int a = n / 2;
            if(((int)sqrt(a) * (int)sqrt(a) == a )) cout <<"YES\n";
            else if(n % 4 == 0){
                int b = n / 4;
                    if(((int)sqrt(b) * (int)sqrt(b) == b )) cout <<"YES\n";
                    else cout <<"NO\n";
            }
            else cout <<"NO\n";
        }
        
    }
    
    return 0;
}