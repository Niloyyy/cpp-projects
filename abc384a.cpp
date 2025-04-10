#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    char a , b;
    string s; 
    cin >> n >> a >> b >> s;
    for(int i = 0 ; i < n;i++){
    	if(s[i] != a) cout<<b;
    	else cout<<s[i];
    }

    

    return 0;
}