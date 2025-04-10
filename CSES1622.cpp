#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};
set<string>ans;

void permutation (string &s , int l , int r){
	if(l == r) ans.insert(s);
	else{
		for(int i = l ; i <= r; i++){
			swap(s[l] , s[i]);
			permutation(s , l + 1 , r);
			swap(s[l] , s[i]);
		}
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    permutation(s , 0 , s.size()-1);
    cout<<ans.size()<<endl;
    for(auto c : ans) cout<<c<<endl;

    return 0;
}