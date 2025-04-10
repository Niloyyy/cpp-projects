#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int sz = s.size();
    int a[sz] ={0};
    for(int i = 0 ; i < sz;i++) a[(int)(s[i]-'A')]++;
    int odd = 0;
    for(int i = 0 ; i < sz;i++){
    	if(a[i] & 1) odd++;
    }
    ///cout <<even<<" "<<odd;
    vector<string>s1,s2;
    if(odd > 1) cout <<"NO SOLUTION";
    else{
    	sort(s.begin , s.end);
    	int i = 0;
    	while(i<=sz){
    		s1.push_back(s[i++]);
    		s2.push_back(s[i++]);
    	}	
    }
    cout <<s1<<" "<<s2;
    return 0;
}