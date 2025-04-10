#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define int long long int
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

bool bs(vector<int>&v , int x , int sz){
	int l = 0 , r = sz - 1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(v[m] == x) return true;
		if(v[m] > x) r = m - 1;
		else l = m + 1;
	}
	return false;
}


int vag(int k , int m){
	if(k % m) return k / m + 1;
	else return k / m;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m , k; cin >> n >> m >> k;
    	vector<int>a(n);
    	for(auto i = 0 ; i < n;i++){
    		cin >> a[i];
    	}
    	int cost = 0;
    	sort(a.begin() , a.end());
    	for(int i = 0 ; i < n;i++){
    		if(k >= m){
    			cost += (i * m + a[i]) * m;
    			k -= m;
    		}else{
    			cost += (i * m + a[i]) * k;
    			break;
    		}
    	}
    	cout<<cost<<endl;
    	
    }
    return 0;
}