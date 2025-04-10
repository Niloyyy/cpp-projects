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

long long  customCeil(double num) {
    long long intPart = static_cast<long long>(num); 
    if (num > intPart) {
        return llabs(intPart + 1);  
    } else {
        return llabs(intPart);
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1 , t = 1; cin >> tc;
    while(t++ <= tc){
    	int n; cin >> n;
    	vector<double>v(n);
    	vector<long long>p(n , 0);
    	for(auto i = 0 ; i < n;i++){
    		cin >> v[i];
    	}
    	long long ans = 0;		
    	for(int i = 1 ; i < n;i++){
            if(v[i-1] == 1 or ( p[i] + log(log(v[i])) >= p[i-1] + log(log(v[i-1])))) continue;
    		if(v[i] == 1 and v[i-1] > 1){
    			ans = -1;
    			break;
    		}
    		double x = log(log(v[i-1])) - log(log(v[i]));
            int cnt = 1 + p[i-1] + x;
            p[i] = cnt;

    	}
    	//for(int i = 0 ; i < n;i++) cout<<log2(p[i])<<' ';
    	if(ans == 0){
    		for(int i = 1 ; i < n;i++) ans += (int)log2(p[i]);
    	}
        
    	cout<<ans<<endl;

    }
    return 0;
}