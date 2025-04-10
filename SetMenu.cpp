#include <bits/stdc++.h>
using namespace std;
 
int bin_s(vector<int>a , int n , int x)
{
    int l = 1 , r = n , m;
    while(l<=r)
    {
        m = (l + r) / 2;
        if(a[m] > x) r = m - 1;
        //else if(a[m]==x) l = m + 1;
        else l = m + 1;
    }
 
    return n-r;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m , p; cin >> n >> m >> p;
    vector<int>a(n+1) , b(m+1) , pref(n+1);
    pref[0] = 0;
    for(auto i = 1 ; i <= n;i++) cin >> a[i];
    sort(a.begin() , a.end());
	a[0] = 0;
    for(auto i = 1 ; i <= n;i++) pref[i] = pref[i-1] + a[i];
    long long ss = 0 ,  sss = 0 , sum = 0;
	b[0] = 0;
    for(auto i = 1 ; i <= m ; i++){
        cin >> b[i];
        sum += b[i];
        int pos = bin_s(a , n , p - b[i]);
        //cout << pos <<endl;
        ss += pos * p;
        sss += b[i]*pos + (pref[n] - pref[n-pos]);
    }
    //cout << ss <<" "<< sss;
    long long ans = 0;
    for(auto i = 1 ; i <= n;i++){
        ans += (sum + a[i]*m);
    }
    cout <<ans+ss-sss<<endl;
    return 0;
}
//13+16+16