#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
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
    	int n , op = 0; cin >> n;
    	string s , odd = "" , even = ""; cin >> s;
    	vector<int>o(27 , 0) , e(27 , 0);
    	for(int i = 0 ; i < n;i++){
    		(i&1) ? odd += s[i] : even += s[i];
    	}
    	for(int i = 0 ; i < even.size();i++){
    		e[even[i]-'a']++;
    	}
    	for(int i = 0 ; i < odd.size();i++){
    		o[odd[i]-'a']++;
    	}
    	int a = 0 , b = 0;
    	for(auto i : e) a += i;
    	for(auto i : o) b += i;
    	a -= *max_element(e.begin() , e.end());
    	b -= *max_element(o.begin() , o.end());
    	cout<<a+b<<endl;
    }
    return 0;
}