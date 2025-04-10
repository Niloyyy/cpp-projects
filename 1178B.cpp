#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    vector<int>fr;
    int v = 0;
    for(int i = 0 ; i < s.size();i++){
    	if(s[i]=='v'){
    		v++;
    	}else if(s[i] == 'o'){
    		if(v > 1) fr.push_back(v-1);
    		fr.push_back(0);
    		v = 0; 
    	}
    }
    if(v > 1) fr.push_back(v-1);
    if(fr.size() < 3){
    	cout<<0;
    	return 0;
    }
    int n = fr.size();
    vector<long long>pre(n, 0) , po(n, 0);
    pre[0] = fr[0] , po[n-1] = fr[n-1];
    for(int i = 1 ; i < fr.size();i++){
    	pre[i] = pre[i-1] + fr[i];
    	po[n-1-i] = po[n-i] + fr[n-1-i];
    }
    long long ans = 0;
    for(int i = 0 ; i < n;i++){
    	if(!fr[i]) ans += 1ll*(pre[i] * po[i]);
    }
    cout<<ans;

    return 0;
}