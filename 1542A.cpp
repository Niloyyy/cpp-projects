#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int odd = 0;
    	for(int i = 0 ; i < 2*n;i++){
    		int x; cin >> x;
    		if((x&1)) odd++;
    	}
    	odd == n ? cout<<"Yes\n" : cout <<"No\n";
    }
    
    return 0;
}