#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
const int N = 1e5 + 9;
const int prime = 7;
int power[N];
set<int>st;

void precalc(){
	power[0] = 1;
	for(int i = 1 ; i <= N;i++){
		power[i] = 1LL * power[i-1] * prime % mod;
		power[i] %= mod; 
	}
}

int hashing(string s){
	int size = s.size();
	int hash = 0;
	for(int i = 0 ; i < size ;i++){
		hash += 1LL * (int)s[i] * power[i] % mod;
		hash %= mod;
	}

	return hash;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precalc();
    int n; cin >> n;
    for(int i = 0 ; i < n;i++){
    	string s1 , s2; cin >> s1 >> s2;
    	s1 += " ";
    	s1 += s2;
    	int x = hashing(s1);
    	st.insert(x);
    }
    cout << st.size();

    return 0;
}