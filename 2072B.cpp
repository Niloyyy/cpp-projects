#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

bool check(ll x) {
    if (x < 0) return false;
    ll s = sqrt(x);
    return (s * s == x);
}

vector<int> fun(int n) {
    vector<int> perm(n);
    for (int i = 0; i < n; i++) {
        perm[i] = n - i;
    }

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += perm[i];
        if (check(sum)) {
            if (i < n - 1) {
                swap(perm[i], perm[i + 1]);
                sum -= perm[i + 1];
                sum += perm[i];
            } else {
                return {-1};
            }
        }
    }

    return perm;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int64_t n; cin >> n;

        if (n == 1) {
            cout << -1 << endl;
            continue;
        }

        vector<int> perm = fun(n);

        if (perm[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int x : perm) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}