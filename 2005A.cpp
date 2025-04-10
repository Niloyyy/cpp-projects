#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

char a[5] = {'a' , 'e' , 'i' , 'o' , 'u'};

int32_t main(){
    ios_base::sync_with_stdio(0);	
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n ; cin >> n;
    	string s = "";
    	int d = n / 5 , r = n % 5;
    	for(int i = 0 ; i < 5;i++){
    		for(int j = 0 ; j < d;j++){
    			s += a[i];
    		}
    		if(r){
    			s += a[i];
    			r--;
    		}
    	}
    	cout<<s<<endl;
    }
    return 0;
}