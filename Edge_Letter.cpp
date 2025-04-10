#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    map<char , vector<int>>track;
    for(int i = 0 ; i < s.size();i++){
    	track[s[i]].push_back(i+1);
    }
    for(auto it : track){
    	for(auto v = it.second.begin(); v != it.second.end();v++){
    		cout<<*v<<' ';
    	}
    	cout<<endl;
    }
    int q; cin >> q;
    // while(q--){
    // 	char a , b; cin >> a >> b;
    // }

    return 0;
}	