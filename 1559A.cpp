#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	LR(0 , n-1){
    		cin >> v[i];
    	}
    	int ans = 0;
    	LR(0 , 31){
    		int bit = i;
    		bool f = true;
    		LR(0 , n-1){
    			if((1<<bit) & v[i]){
    				continue;
    			}else{
    				f = false;
    				break;
    			}
    		}
    		if(f) ans += (1<<bit);
    	}
    	cout<<ans<<endl;

    }
    return 0;
}