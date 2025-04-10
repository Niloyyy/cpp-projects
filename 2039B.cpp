#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	string s; cin >> s;
    	int pre = 0 , suf = 2;
    	bool f = 0;
    	for(int i = 1 ; i < s.size();i++){
    		if(s[i] == s[i-1]){
    			cout<<s[i-1]<<s[i]<<endl;
    			f = 1;
    			break;
    		}
    	}
    	while(!f and suf < s.size()){
    		string t = "";
    		for(int i = pre ; i <= suf;i++) t += s[i];
    		if(t[0] != t[1] and t[0] != t[2] and t[1] != t[2]){
    			f = 1;
    			cout<<t<<endl;
    			break;
    		}
    		suf++ , pre++;	
    	}
    	pre = 0 , suf = 3;
    	while(!f and suf < s.size()){
    		string t = "";
    		for(int i = pre ; i <= suf;i++) t += s[i];
    		if(t[0] == t[1] and t[2] == t[3] and t[1] != t[2]){
    			cout<<t<<endl;
    			f = 1;
    			break;
    		}
    		pre++ , suf++;	
    	}
    	if(!f) cout<<-1<<endl;  
    }
    return 0;
}