#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll sum = (n*n + n) / 2;
    n--;
    while(n--){
    	int x; cin >> x;
    	sum -= x;
    }
    cout << sum;
    
    return 0;
}