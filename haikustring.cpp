	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	#define endl '\n'

	int main(){
	    ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    string s; cin >> s;
	    for(int i = 0 ; i < s.size();i++){
	    	if(s[i]== ',') cout <<" ";
	    	else cout << s[i];
	    }
	    
	    return 0;
	}