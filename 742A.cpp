#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int power(int a , int b , int m = 10){
  if(b == 1) return a % m;
  if(b&1){
    int x = power(a , b / 2 , m);
    return (1LL * x * x) % m;
  }else{
    return (power(a , b - 1 , m) * a) % m;
  }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    cout<<power(1378, n);
    return 0;
}