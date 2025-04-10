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

int bs(int x , vector<int>&b){
	int l = 0 , r = b.size() - 1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(b[m] > x) r = m - 1;
		else l = m + 1;
	}
	return b.size() - r - 1;
}



int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int> a , b;
    	for(int i = 1 ; i <= n;i++){
    		int x; cin >> x;
    		if(i > x){
    			a.push_back(i);
    			b.push_back(x);
    		}
    	}
    	long long cnt = 0;
    	sort(b.begin() , b.end());
    	for(auto i : a){
    		cnt += bs(i , b);
    	}
    	cout<<cnt<<endl;
    }
    return 0;
}