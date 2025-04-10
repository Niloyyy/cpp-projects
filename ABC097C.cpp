#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

set<string> substring(string s){
	set<string>substr;
	for(int i = 0 ; i < s.size();i++){
		string sub = "";
		for(int j = i ; j < s.size();j++){
			sub += s[j];
			substr.insert(sub);
		}
	}
	return substr;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    set<string>se = substring(s);
    int k ; cin >> k;
    vector<string>ss;
    for(auto c : se){
    	ss.push_back(c);
    }
    cout<<ss[k-1];

    return 0;
}