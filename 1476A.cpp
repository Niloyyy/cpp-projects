#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc; 
    while(tc--){
    	double n , k; cin >> n >> k;
    	if(n==k) cout << 1 <<endl;
    	else if(n>k) (int)n % (int)k == 0 ? cout << 1 <<endl : cout << 2 <<endl;
    	else cout <<(int)ceil(k / n)<<endl;
    }
    
    return 0;
}