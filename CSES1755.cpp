#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    map<char,int>hash;
    for(auto c : s){
    	hash[c]++;
    }
    char odd_char;
    int odd = 0 , even = 0;
    for(auto it : hash){
    	if(it.second & 1){
    		odd++;
    		odd_char = it.first;
    	}
    	else even++;
    	//cout<<it.first<<" "<<it.second<<endl;
    }
    string ans = "";
    if(s.size() == 1) cout<<s;
    else if(odd > 2 or !even) cout<<"NO SOLUTION";
    else{
    	for(auto it : hash){
    		if(it.first != odd_char){
    			int i = it.second / 2;
    			while(i--){
    				ans += it.first;
    			}
    		}
    	}
    	string extra = ans;
    	reverse(extra.begin() , extra.end());
    	int i = hash[odd_char];
    	while(i--){
    		ans += odd_char;
    	}
    	cout<<ans+extra;
    	//cout<<odd;
    }
    return 0;
}