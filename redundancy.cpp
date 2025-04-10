#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int>mp;
    vector<int>order;
    int x;
    while(cin >> x){
        if(mp[x]==0) order.push_back(x);
        mp[x]++;
    }
    for(auto m : order){
        cout << m <<' '<<mp[m]<<endl;
    }
    return 0;
}