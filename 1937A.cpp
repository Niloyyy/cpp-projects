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

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	string s , t , ss , tt = ""; cin >> s >> t;
    	ss = s;
    	map<string , int>ans;
    	for(int i = n-1  ; i >= 0;i--){
    		tt = t[i] + tt;
 			ans[ss + tt]++;
 			ss.erase(i,1);
    	}
    	bool f = true;
    	for(auto it : ans){
    		if(f){
    			cout<<it.first<<endl<<it.second<<endl;
    			f = false;
    		}else{
    			break;
    		}
    	}
    }
    return 0;
}