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
    	if(n % 3 ==0) cout <<n/3<<" "<<(n/3)<<endl;
    	else{
    		int x = n / 3;
    		if(x + (x+1) * 2 == n) cout << x <<" "<<x+1<<endl;
    		else if( x+1 + x * 2 == n)   cout << x+1 <<" "<<x<<endl;
    	}
    }
    
    return 0;
}