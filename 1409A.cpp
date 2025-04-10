#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int a , b; cin >> a >> b;
    	int mx , mn;
        mx = max(a , b); 
        mn = min(a , b);
        if(mx==mn) cout <<0<<endl;
        else if((mx-mn) % 10 == 0) cout << (mx-mn) / 10<<endl;
        else  cout << (mx-mn) / 10 + 1<<endl;
    }
    
    return 0;
}