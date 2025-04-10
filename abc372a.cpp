#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string s , ans = ""; cin >> s;
    for(int i = 0 ; i < s.size();i++){
    	if(s[i] != '.') ans += s[i];
    }
    cout<<ans;
    return 0;
}