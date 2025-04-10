#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	if((n & 1) == 0) cout<<"No words\n";
    	else if(n == 1 or ((n/2) & 1) == 0) cout<<"Beautiful game\n";
    	else cout<<"Never playing this again\n";
    	//else cout<<"No words\n";
    }
    return 0;
}