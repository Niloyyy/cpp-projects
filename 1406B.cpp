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
    	int n; cin >> n;
    	vector<int>v(n);
    	LR(0 , n-1) cin >> v[i];
    	sort(v.begin() , v.end());
    	int ans_l = 1 , ans_r = 1 , prev = v[4];
    	LR(0 , n-1){
    		if(i < 4) ans_l *= v[i];
    		else if((ans_l * v[i] ) / prev >= ans_l){
    			ans_l /= prev;
    			ans_l *= v[i];
    			prev = v[i];
    		} 
            cerr<<ans_l<<endl;
    	}
        assert(5 != 5);
    	prev = v[n-5];
    	RL(n-1 , 0){
    		if(i >= n-4) ans_r *= v[i];
    		else if((ans_r * v[i]) / prev >= ans_r){
    			ans_r /= prev;
    			ans_r *= v[i];
    			prev = v[i];
    		} 
    	}
    	cout<<max(ans_l,ans_r)<<endl;

    }
    return 0;
}