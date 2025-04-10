#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    long long n;
    string s;
    cin >> s >> n;
    bool f = 1;
    long long ache = 0;
    int sz = s.size()-1;
    int b = __lg(n);
    for(int bit = sz ;bit >= min(0 , abs(sz-b)) ; bit--){
    	if(s[bit] == '?'){
    		continue;
    	}
    	ache += (s[bit]-'0') * (1ll<<(sz-bit));
    	cout<<ache<<endl;
    }
    //cout<<;
    //for(auto i : s) cout<<i<<' ';     

    return 0;
}