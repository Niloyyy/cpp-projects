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
    	int n , m; cin >> n >> m;
    	int a[n][m];
    	for(int i = 0 ; i <  n;i++){
    		for(int j = 0 ; j < m;j++){
    			cin >> a[i][j];
    		}
    	}
    	if(n == 1 and m == 1) cout<<-1<<endl;
    	else{
    		for(int i = 0 ; i <  n;i++){
    			for(int j = 0 ; j < m;j++){
                    cout<<a[(i+1) % n][(j+1) % m]<<' ';
    			}
                cout<<endl;
    		}
    	}
    }
    return 0;
}