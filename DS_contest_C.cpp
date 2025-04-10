#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<int , int>mp;
    for(int i = 0 ; i < n;i++){
    	int x ; cin >> x;
    	mp[x]++;
    }
    vector<int>v;
    for(auto it = mp.begin() ; it != mp.end() ;it++){
    	v.push_back(it->second);
    }
    long long carry = 0 , ans;
    for(int i = 0 ; i < v.size()-1;i++){
    	v[i+1] >= (v[i] - carry) ? carry = 0 : carry = v[i+1] - v[i] + carry;
    	ans = carry + v[i+1];
    }
    v.size() == 1 ? cout << v[0] : cout << ans;
    
    return 0;
}