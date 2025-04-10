#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    long long a , b; cin >> a >> b;
    a % b == 0 ? cout<<(a / b) : cout<<a / b + 1;
    return 0;
}