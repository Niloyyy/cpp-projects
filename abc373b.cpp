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

    string s; cin >> s;
    int op  = 0;
    vector<int>f(26 , 0);
    for(int i  = 0 ; i < 26; i++) f[s[i] - 'A'] = i+1;
   	for(int i = 1 ; i < 26;i++) op += abs(f[i] - f[i-1]); 	
    cout<<op;	
    return 0;
}