#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int k; cin >> k;
    	int cnt = 1 , ans;
    	for(int i = 1 ; cnt <= k ; i++){
    		if(i % 3 == 0 || i % 10 == 3) continue;
    		else{
    			ans = i;
    			cnt++;
    		}
    	}
    	cout << ans <<endl;
    }
    
    return 0;
}