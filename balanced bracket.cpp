#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--)
    {
        string s ; cin >> s;
        int sz = s.size();
        bool ok = true;
        for(int i = 0 ;i < sz ;i++)
        {
            if(s[i] == '(' && s[sz-i] == ')') continue;
            else if(s[i] == '{' && s[sz-i] == '}') continue;
            else if(s[i] == '{' && s[sz-i] == '}') continue;
            else{
                ok = false;
            }    
        }
        ok ? cout <<"YES\n" : cout <<"NO\n";
    }	
    
    return 0;
}