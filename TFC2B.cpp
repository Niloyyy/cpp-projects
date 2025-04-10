#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; 
    string s; cin >> n >> s;
    long long ans = 0;
    vector<int>r(n+1 , 0) , g(n+1 , 0) , b(n+1 , 0);
    for(int i = n-1 ; i >= 0 ;i--){
    	r[i] += (s[i] == 'R');
    	g[i] += (s[i] == 'G');
    	b[i] += (s[i] == 'B');
    	g[i] += g[i+1];
    	b[i] += b[i+1];
    	r[i] += r[i+1];
    }
    for(int i = 0 ; i + 3 < n;i++){
    	if(s[i] == 'R'){
    		for(int j = i+1 ; j + 1 < n;j++){
    			if(s[j] == 'G'){
    				ans += b[j+1];
    				if(2 * j - i < n) ans -= (s[2 * j - i] == 'B');
    			}
    			else if(s[j] == 'B'){
    				ans += g[j+1];
    				if(2 * j - i < n) ans -= (s[2 * j - i] == 'G');
    			}
    		}
    	}else if(s[i] == 'G'){
    		for(int j = i+1 ; j + 1 < n;j++){
    			if(s[j] == 'B'){
    				ans += r[j+1];
    				if(2 * j - i < n) ans -= (s[2 * j - i] == 'R');
    			}
    			else if(s[j] == 'R'){
    				ans += b[j+1];
    				if(2 * j - i < n) ans -= (s[2 * j - i] == 'B');
    			}
    		}
    	}else{
    		for(int j = i+1 ; j + 1 < n;j++){
    			if(s[j] == 'G'){
    				ans += r[j+1];
    				if(2 * j - i < n) ans -= (s[2 * j - i] == 'R');
    			}
    			else if(s[j] == 'R'){
    				ans += g[j+1];
    				if(2 * j - i < n) ans -= (s[2 * j - i] == 'G');
    			}
    		}
    	}
    }
    cout<<ans<<endl;

    return 0;
}