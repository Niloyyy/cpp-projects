#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> build_lps(vector<int>LPS , string s){
	int pre = 0 , suf = 1;
	while(suf < s.size()){
		if(s[pre] == s[suf]){
			LPS[suf++] = ++pre; 
		}else{
			if(pre == 0){
				suf++;
			}else{
				pre = LPS[pre-1];
			}
		}
	}
	return LPS;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    vector<int>LPS(s.size() , 0);
    LPS = build_lps(LPS , s);
    for(auto i : LPS) cout<<i;


    return 0;
}