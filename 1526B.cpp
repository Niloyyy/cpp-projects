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
        int b = n % 11;
        int sala = n - b * 111;
        if(sala >= 0 && sala % 11 == 0) cout <<"YES\n";
        else cout <<"NO\n";
        }
        return 0;
    }