#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define f first
#define s second
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    int n = s.size();
    if(n == 2){
    	if(s[0] == s[1]){
    		s[0]++;
    		if(s[0] > 'z') s[0] = ('a' + (int)s[0] % ('z'+1));
    	}
    	cout<<s;
    	return 0;
    }
    for(int i = 1 ; i < s.size()-1;i++){
    	if((s[i] == s[i-1] and s[i] == s[i+1]) or (s[i] == s[i-1] and s[i] != s[i+1])){
    		while(s[i] == s[i-1] or s[i] == s[i+1]){
    			s[i]++;
    			if(s[i] > 'z') s[i] = ('a' + (int)s[i] % ('z'+1));
    		}
    	}	
    }
    if(n > 2 and s[n-2] == s[n-1]){
    	while(s[n-2] == s[n-1] or s[n-2] == s[n-3]){
    		s[n-2]++;
    		if(s[n-2] > 'z') s[n-2] = ('a' + (int)s[n-2] % ('z'+1));
    	}
    }

    cout<<s;	
    return 0;
}
//abcbcbcd