#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

vector<int> build_lps(string &t){
	vector<int>lps(t.size() , 0);
	int pre = 0 , suf = 1;
	while(suf < t.size()){
		if(t[suf] == t[pre]){
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

    int tc = 1; cin >> tc;
    while(tc--){
    	string p , t; cin >> p >> t;
    	vector<int> lps = build_lps(t);
    	vector<int>ans;
    	int i = 0 , j = 0;
    	while(i < p.size()){
    		if(p[i] == t[j]){
    			i++ , j++;
    			if(j == t.size()) ans.push_back(i-j + 1);
    		}else{
    			if(j == 0) i++;
    			else j = lps[j-1];
    		}
    	}
    	if(ans.size() == 0) cout << "Not Found\n";
    	else{
    		cout<<ans.size()<<endl;
    		for(auto i : ans) cout<<i<<' ';
    		cout<<endl;	
    	}
    	if(tc) cout<<endl;
    }
    return 0;
}