#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ; cin >> n;
    vector<int>a(n);
    for(auto &x : a) cin >> x;
    
    sort(a.begin(), a.end(), [](int x, int y) {
      return (x & 1) < (y & 1);
    });
    for(auto x : a ) cout<<x<<" ";

    return 0;
}