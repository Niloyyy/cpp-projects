#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
  
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tc; cin >> tc;
  while(tc--){
    ll y; cin >> y;
    if(sqrt(1+8*y)!=sqrtf(1.0+8.0*y)) cout <<"NAI"<<endl;
    else{
      cout<<(sqrt(1+8*y)-1) / 2<<endl;
    }
  }


  return 0;
}