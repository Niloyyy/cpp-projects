// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+9;
int di[N];

void Divisors(int n){
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j * i <= n; j++)
      di[i * j]++;
  }

}

int main(){
        int n; cin >> n;
        Divisors(n);
        long long ans = 0;
        for(int i = 1 ; i <= n;i++) ans += i*di[i];
        cout << ans;

  return 0;
}
