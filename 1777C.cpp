#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2 * acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1, +0, -1, +0};
int dc[] = {+0, -1, +0, +1};
const int M = 1e5 + 9;
vector<int> a(M, 0); 


int di(int x, int cnt , int m) {
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0 and i <= m) {
            if (a[i] == 0) cnt++;
            a[i]++;
            if (x / i != i and x / i <= m) {
                if (a[x / i] == 0) cnt++;
                a[x / i]++;
            }
        }
    }
    return cnt;
}

int bad(int x, int cnt , int m) {
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0 and i <= m) {
            a[i]--;
            if (a[i] == 0) cnt--;
            if (x / i != i and x / i <= m) {
                a[x / i]--;
                if (a[x / i] == 0) cnt--;
            }
        }
    }
    return cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1; 
    cin >> tc;
    while (tc--) {
        int n, m; 
        cin >> n >> m;
        for(int i = 1 ; i <= m;i++) a[i] = 0;
        vector<int> v(n);
        for (auto &u : v) cin >> u;

        sort(v.begin(), v.end());

        int l = 0, r = 0, cnt = 0, mn = INT_MAX;
       
        while (r < n) {
            cnt = di(v[r], cnt , m);
            r++;
            while (cnt == m) {
                mn = min(v[r - 1] - v[l], mn); 
                cnt = bad(v[l], cnt , m);
                l++;
            }
        }

        mn != INT_MAX ? cout << mn << endl : cout << -1 << endl;
    }
    return 0;
}
