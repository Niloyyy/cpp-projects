#include<bits/stdc++.h>
using namespace std;

int LCS(int idx_s , int idx_t , string s , string t){
	if(idx_s < 0 or idx_t < 0) return 0;
	if(s[idx_s] == t[idx_t]){
		return 1 + LCS(idx_s-1 , idx_t - 1 , s , t);
	}else{
		return max(LCS(idx_s-1 , idx_t , s , t) , LCS(idx_s , idx_t - 1 , s , t));
	}
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "AGGTAB" , t = "GXTXAYB";
    cout<<LCS(s.size()-1 , t.size()-1 , s , t);
    return 0;
}