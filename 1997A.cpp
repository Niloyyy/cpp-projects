#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	string s; cin >> s;
    	bool flag = true;
    	for(int i = 1 ; i < s.size();i++){
    		if(s[i-1] == s[i]){
    			flag = false;
    			break;
    		}
    	}
    	if(s.size() == 1 or flag){
    		cout<<s<<(char)('a' + (s[s.size() - 1] + 1) % 26)<<endl;
    		continue;
    	}
    	for(int i = 1 ; i < s.size();i++){
    		bool f = false;
    		if(s[i-1] == s[i]){
    			for(int j = 0 ; j <= (i-1);j++) cout<<s[j];
    			cout<<(char)('a' + (s[i] + 1) % 26);
    			for(int j = i ; j < s.size();j++) cout<<s[j];
    			f = true;	
    		}
    	if(f){
    		cout<<endl;
    		break;
    	}
    	}
    
    }
    return 0;
}