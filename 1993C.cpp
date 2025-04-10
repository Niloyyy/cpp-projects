#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
#define pii pair<int,int>
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int N = 3e5 + 9;

int C(int x , int y){
	if(x % y) return x / y + 1;
	else return x / y;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	vector<int>v(n);
    	map<int,int>rn;
    	vector<pair<int,int>>range;
    	int l = 5e5 , r = -1;
    	for(int i = 0 ; i < n;i++){
    		cin >> v[i];
    		int rd = round(1.0 * v[i] / k);
    		int d = v[i] / k;
    		if(!(d & 1) and v[i] != k * d) d += 2;
    		else if((d & 1) and rd - d == 1) d++;
    		else if(d & 1) d += 3;
    		    
    		int x = v[i] - d * k;
    		int y = v[i] - k * (d - 1) - 1;
    		range.push_back({x , y});
    		rn[x]++;
    		rn[y + 1]--;
    		l = min(x , l);
    		r = max(r , y);
    		//cout<<r<<' ';
    	}
    	for(int i = l+1 ; i <= r;i++) rn[i] += rn[i-1];
    	//for(int i = l ; i <= r;i++) cout<<rn[i]<<' ';
    	//cout<<endl<<"l = "<<l<<" r = "<<r<<endl;
    	int got = -2e9;  
    	for(int i = l ; i <= r;i++){
    		if(rn[i] == n){
    			got = i;
    			break;
    		}
    	} 
    	//cout<<got<<endl;
    	for(auto i : range) cout<<i.f<<' '<<i.s<<endl;
    	if(got != -2e9){
    		int mx = *max_element(v.begin() , v.end());
    		int x;
    		if((mx - got) % k) x =  (mx - got) / k + 1;
    		else x = (mx - got) / k;
    		cout<<1ll * got + 1ll * x * k<<endl;
    	}else cout<<-1<<endl;
    }
    return 0;
}