#include<bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n , ans = 0 ; cin >> n;
    map<int,int>mp;
    vector<int>v(n+1 , 0) , pre(n+1 , 0);
    for(int i = 1 ; i <= n;i++){
    	int x; cin >> x;
    	if(mp[x]) v[i] = v[i-1];
    	else v[i] = v[i-1] + 1;
    	mp[x]++;
    }
    for(int i = 1 ; i <= n;i++){
    	pre[i] = pre[i-1] + v[i];
    }
    for(int i = 1 ; i <= n;i++){
    	cout<<(pre[n] - pre[i-1] -  (n - i + 1) )<<endl;
    }
    //cout<<ans;

    return 0;
}