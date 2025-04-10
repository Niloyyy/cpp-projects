#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define f first
#define s second
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	string s; cin >> s;
    	int one = 0 , c_z = 0 , ze = 0; 
    	for(int i = 0 ; i < n;i++){
    		if(s[i] == '1'){
    			one++;
    		}
    		if(s[i] == '1' and c_z > 0) ze++ , c_z = 0 ;
    		else if(s[i] == '0')c_z++;
    	}
    	if(c_z != 0) ze++;
    	//cout<<c_z;
    	if(one > ze) cout<<"YES\n";
    	else cout<<"NO\n";	
    
    }
    return 0;
}