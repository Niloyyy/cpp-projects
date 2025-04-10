#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	if((n & (n-1)) == 0) cout<<-1<<endl;
    	else{
    		for(int bit = 0 ; bit <= __lg(n) ;bit++){
    			if((1 << bit) & n){
    				cout<<(1<<bit) <<' '<<n- (1<<bit)<<endl;
    				break;
    			}
    		}
    	}
    }


    return 0;
}