#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;
   int a[n + 1], b[n + 1];
   for (int i = 1; i <= n; i++) cin >> a[i];
   for (int i = 1; i <= n; i++) cin >> b[i];

   int ans = INT_MAX;

   for (int i = 0; i <= n; i++) {
     int len = 0, l = 0;
     for (int j = 1, k = 1; len < i and k <= n; k++) {
      if(b[j] == a[k]) ++len, j++, l = k;
     }
     for (int j = n, k = n; j > l and k >= 1; k--)
      if(b[j] == a[k]) ++len, j--;
     ans = min(ans, n - len);
   }

   cout << ans << '\n';



}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
      cout << "Case " << i << ": ";
      solve();
    }
}