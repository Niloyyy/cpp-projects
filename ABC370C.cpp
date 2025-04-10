#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    string s , t; cin >> s >> t;
    vector<string>ans;
    for(int i = 0 ; i < s.size() ;i++){
    	if(s[i] > t[i]){
    		s[i] = t[i];
    		ans.push_back(s);
    	}
    }
    for(int i = s.size()-1 ; i >= 0 ;i--){
    	if(s[i] != t[i]){
    		s[i] = t[i];
    		ans.push_back(s);
    	}
    }
    //reverse(ans.begin() , ans.end());
    cout<<ans.size()<<endl;
    for(auto i : ans) cout<<i<<endl;

    return 0;
}