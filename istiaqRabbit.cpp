#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const int mod = 1e6+3;
 
int power(int a, int n, int mod) {
  if (n == 1) return a % mod;
  if (n % 2 == 0) {
    int x = power(a, n / 2, mod);
    return 1LL * x * x % mod;
  }
  else {
    int x = power(a, n / 2, mod);
    return (1LL * x * x) % mod * a % mod;
  }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
      int a , r , n; 
      cin >> a >> r >> n;
      if(n==1) cout << (a*r) % mod<<endl;
      else if(n==2) cout << (a*(r+1) % mod)<<endl;
      else cout <<(a + a*(power(r , n-1, mod) + power(r , n-2, mod)) % mod)<<endl;
      
    }
    
    return 0;
}
