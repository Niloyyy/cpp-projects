#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector< pair<int , int> > v(n);
    for(int i = 0 ; i < n;i++){
    	int x , y; cin >> x >> y;
    	v[i] = make_pair(x , y);
    }
    sort(v.begin() , v.end());
    for(int i = 0 ; i < n;i++){
        cout <<v[i].first<<" "<<v[i].second<<endl;
    }
    // long long ans1 = 0 , ans2 = 0;
    // for(int i = 0 ; i < n;i++){
    //     ans1 += v[i].first * v[ (n-1) == i ? 0 : i+1].second;
    //     ans2 += v[i].second * v[ (n-1) == i ? 0 : i+1].first;
    // }
    // cout<<abs(ans1-ans2)<<endl;
    
    return 0;
}