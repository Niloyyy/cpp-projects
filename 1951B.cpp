#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
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
    	int n , k; cin >> n >> k;
    	vector<int>v(n);
    	LR(0 , n-1) cin >> v[i];
    	if(*max_element(v.begin() , v.end()) == v[k-1]){
    		cout<<n-1<<endl;
    		continue;
    	}
    	int win = 0 , s = 0 ;
		bool f = true;
		//v[k-1]^=v[0]^=v[k-1]^=v[0];
		for(int i = 0 ; i < k-1;i++){
			if(v[i] > v[k-1]){
				s = i;
				break;
			}
		}
		int r = 0;
		for(int i = s+1; i < n;i++){
			if(v[i] < v[k-1]) r++;
			else break;
		}
		//cout<<s<<' '<<r<<' '<<k<<endl;
		if(r+1 <= s-1){
			swap(v[k-1] , v[0]);
			k = 0;
		}else{
			swap(v[k-1] , v[s]);
			k = s;
		}
		//cout<<k<<endl;
		//if(k) swap(v[k-1] , v[0] ) , k = 0;
		if(k>0) win++;
		//for(auto i : v)cout<<i<<" ";
		for(int i = k+1 ; i < n;i++){
			if(v[k] > v[i]) win++ ;
			else break;
		}
		cout<<win<<endl;
    }
    return 0;
}