#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set< pair <int , string> >st;
    map<string , int>mp;
    for(int i = 0 ; i < n;i++){
    	string s;
    	int y , a , x;cin >> x;
    	if(x == 1){
    		cin >> s >> y;
    		st.insert({y , s});
    		mp[s] = y;
    	}else if(x == 2){
    		cin >> s >> y;
    		a = mp[s];
    		auto it = st.find({a , s});
    		if(it != st.end())
    		st.erase(it);

    		st.insert({y , s});
    		mp[s] = y;
    	}else{
    		cin >> s;
    		auto it = st.begin();
    		cout << (*it).second <<" "<< i + 1 <<endl;
    		st.erase(it);
    	}
    }
    
    return 0;
}