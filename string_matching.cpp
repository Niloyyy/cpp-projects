#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int p = 2837 , N = 2e6 + 9 , mod = 1e9 + 7;
vector<long long>pw(N , 0);

void precalc(){
	pw[0] = 1ll;
	for(int i = 1 ; i < N;i++){
		pw[i] = 1ll * pw[i-1] * p;
		pw[i] %= mod;
	}
}

int get_hash(string &s){
	long long hash = 0;
	for(int i = 0 ; i < s.size();i++){
		hash += (1ll * pw[i] * (s[i] - 'a' + 1)) % mod;
		hash %= mod;
	}
	return hash % mod;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precalc();
    int tc; cin >> tc;
    while(tc--){
    	string txt , pat; cin >> txt >> pat;
	    int n = txt.size() , m = pat.size();
	    vector<long long>hash(n , 0);
	    hash[0] = (1ll * pw[0] * (txt[0] - 'a' + 1)) % mod; 
	    for(int i = 1 ; i < n;i++){
	    	hash[i] = (hash[i-1] + (1ll * pw[i] * (txt[i] - 'a' + 1)) % mod) % mod;
	    }
	    int pat_hash = get_hash(pat);
	    int s = 0 , e = m - 1;
	    vector<int>ans;
	    while(e < n){
	    	int txt_hash = hash[e];
	    	if(s > 0){
	    		txt_hash = (hash[e] - hash[s-1] + mod)  % mod;
	    	}
	    	if(txt_hash == (1ll * pat_hash * pw[s]) % mod){
	    		ans.push_back(s+1);
	    	}
	    	e++ , s++;
	    }
	    if(ans.size() == 0) cout<<"Not Found\n";
	    else{
	    	cout<<ans.size()<<endl;
	    	for(auto i : ans) cout<<i<<' ';
	    	cout<<endl;	
	    }
	    if(tc) cout<<endl;
    }
    return 0;
}