#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    map<string,string>mp;
    while(getline(cin , s)){
    	if(s.empty()) continue;
    	if(find(s.begin(),s.end(),' ') != s.end()){
    		stringstream ss(s);
    		string a , b;
    		ss >> a >> b;
    		mp[b] = a;
    		//cout << a <<' '<< b <<endl;
    	}else{
    		string sx = s;
    		if(mp.find(sx) != mp.end()) cout <<mp[sx]<<endl;
    		else{
    			cout << "eh" <<endl;
    		}

    	}	
    }
    return 0;
}