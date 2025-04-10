#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a , b , c; cin >> a >> b >> c;
    int i = max({a , b , c});
    int j = min({a , b , c});
    int k = a+b+c-i-j;
    if(i == 7 && j == 5 && k == 5) cout <<"YES";
    else cout <<"NO";
    
    return 0;
}