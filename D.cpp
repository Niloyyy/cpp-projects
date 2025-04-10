#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	string s1 , s2 ; cin >> s1 >> s2;
    	string tm = "";
    	vector<int> u , v;
    	if(s1 == s2){
    		cout <<s1;
    		return 0;
    	}
    	for(auto s : s1){
    		if(s != '.'){
    			tm += s;
    		}else if(s == '.'){
    			u.push_back(stoi(tm));
    			tm.clear();
    		}
    	}
    	u.push_back(stoi(tm));


    	tm.clear();
    	for(auto s : s2){
    		if(s != '.'){
    			tm += s;
    		}else if(s == '.'){
    			v.push_back(stoi(tm));
    			tm.clear();
    		}
    	}
    	v.push_back(stoi(tm));
    	//for(auto i : u) cout << i<<" ";
        for(int i = 0 ;i < u.size();i++){
        	if(u[i] == v[i]) continue;
        	if(u[i] > v[i]){
        		cout << s1 ;
        		break;
        	}else if( v[i] > u[i]){
        		cout << s2;
        		break;
        	}
        }
    }
    return 0;
}