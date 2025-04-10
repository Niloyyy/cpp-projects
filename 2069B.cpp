#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
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

const int N = 705;
int dr[] = {+1, 0, -1, 0};
int dc[] = {0, -1, 0, +1};
int g[N][N];
bool vis[N][N];
int n, m;

void reset() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            vis[i][j] = false;
        }
    }
}

int dfs(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > m || vis[i][j] || g[i][j] != val) {
        return 0;
    }
    vis[i][j] = true;
    int cnt = 1;
    for (int it = 0; it < 4; it++) {
        cnt += dfs(i + dr[it], j + dc[it], val);
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> g[i][j];
            }
        }
        //cout<<dfs(1 , 1 , 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (!vis[i][j]) {
                    int c = dfs(i, j, g[i][j]);
                    if (c > 1) mp[g[i][j]]++;
                    else if(c == 1 and mp[g[i][j]] == 0) mp[g[i][j]] = 0;
                }
            }
        }

        int sum = 0, mx = -1;
        for (auto &it : mp) {
            sum += it.s;
            mx = max(mx, it.s);
        }

        cout << sum + mp.size() - mx - 1 << endl;
        reset();
    }
    return 0;
}