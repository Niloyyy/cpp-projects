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

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int a[n] , b[n];
    	vector<int>ans;
    	long long sum = 0;
    	for(int i = 0 ; i < n;i++){
    		cin >> a[i];
    		b[i] = a[i];
    	}
    	sort(a , a + n);
    	int mxr = a[n-1] , mxl = a[n-2];
    	for(int i = 0 ; i < n-1;i++){
    		sum += a[i];
    	}
    	for(int i = 0 ; i < n;i++){
    		if(b[i] == mxr){
    			if(sum - mxl == mxl) ans.emplace_back(i+1);
    		}else if(sum - b[i] == mxr){
    			ans.emplace_back(i+1);
    		}
    	}
    	cout<<ans.size()<<endl;
    	for(auto i : ans){
    		cout<<i<<' ';
    	}
    	cout<<endl;
    }
    return 0;
}