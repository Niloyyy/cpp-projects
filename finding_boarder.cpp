#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> build_lps(string &s){
	vector<int>lps(s.size() , 0);
	int pre = 0 , suf = 1;
	while(suf < s.size()){
		if(s[pre] == s[suf]){
			lps[suf++] = ++pre;
		}else{
			if(pre == 0) suf++;
			else pre = lps[pre-1];
		}
	}
	return lps;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    vector<int> lps = build_lps(s);
    vector<int> ans;
    int i = lps[s.size()-1];
    while(i){
    	ans.push_back(i);
    	i = lps[i-1];
    }
    sort(ans.begin() , ans.end());
    for(auto i : ans) cout<<i<<' ';

    return 0;
}