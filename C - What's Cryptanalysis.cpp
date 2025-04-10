#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--){
    string s; cin >> s;
    bool ans = true;
    int x = s.size();
    for(int i = 0 ; i < x/2 ;i++){
        if(s[i] == '(' && s[x-1-i] == ')') continue;
        else if(s[i] == '{' && s[x-1-i] == '}') continue;
        else if(s[i] == '[' && s[x-1-i] == ']') continue;
        else ans = false; 
    }
    if(ans) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
   } 	
    
    return 0;
}