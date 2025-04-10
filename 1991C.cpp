#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define F first
#define S second
using namespace std;
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
    	vector<int>v(n);
    	bool f = true;
    	for(int i = 0 ;i < n;i++){
    		cin >> v[i];
    		if(i and abs(v[i]-v[i-1]) % 2 == 1) f = false;
    	}
    	if(f){
    		int mx = *max_element(v.begin() , v.end());
    		if(mx)cout<<(int)log2(mx) + 1<<endl;
    		else cout<<mx<<endl;
    		while(mx){
    			if(mx&1){
    				cout<< mx / 2 + 1 <<' ';
    			}else{
    				cout<< mx / 2 <<' ';
    			}
    			mx /= 2;	
    		}
    		cout<<endl;
    	}else cout<<-1<<endl;
    
    }
    return 0;
}