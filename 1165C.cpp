#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    // for(int i = 0 ; i < n ;i+=2){
    // 	if(s[i] == s[i+1]){
    // 		//cout <<i<<endl;
    // 		s.erase(s.begin() + (i+1));
    // 		ans++;
    // 		i -= 2; 
    // 	}
    // }
    int i = 0;
    // while(i < n){
    // 	if(s[i] == s[i+1]){
    // 		ans++;
    // 	}else{
    // 		i+=2;
    // 	}
    // }
    while(i < n){
    	cout << s<<endl;
    	s.erase(i , 1);
    }
    cout << ans <<' '<<s;
    
    return 0;
}