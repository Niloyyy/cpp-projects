#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

bool bs(vector<int>v , int r , int x){
	int l = 0 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(x == v[m]) true;
		if(x < v[m]) r = m - 1;
		else l = m + 1;
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	map<string , int>mp;
    	int n; cin >> n;
    	vector<string>s(n);
    	for(auto i = 0 ; i < n ;i++){
    		cin >> s[i];
    		mp[s[i]] = 1;
    	}
    	for(int i = 0; i < n;i++){
    		string f = "" , st = s[i];
    		bool flag = true;
    		for(auto j =  0 ; j < st.size();j++){
    			f += st[j];
    			if(mp[f]){
    				string s = "";
    				for(auto k = j+1 ; k < st.size();k++){
    					s += st[k];
    				}
    				if(mp[s] and s != ""){
    					cout<<1;
    					flag = false;
    					break;
    				}
    			}
    			//break;
    		}
    		if(flag) cout<<0;
    	}
    	cout<<endl;	

    }
    return 0;
}