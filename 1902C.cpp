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
map<int , int> div_cnt;

vector<int> divisors(int x){
	vector<int>ret;
	for(int i = 1 ; i * i <= x;i++){
		if(x % i == 0){
			ret.emplace_back(i);
			if(x / i != i) ret.emplace_back(x/i);
		}
	}
	return ret;
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n; 
    	vector<int>v(n) , diff , div;
    	map<int,int>m;
    	for(int i = 0 ; i < n;i++){
    		cin >> v[i];
    		m[v[i]] = 1;
    	}
    	if(n == 1){
    		cout<<n<<endl;
    		continue;
    	}
    	int mx = *max_element(v.begin() , v.end()) , di;
    	for(int i = 0 , j = 0 ; i < n;i++){
    		if(v[i] != mx) diff.push_back(mx - v[i]);
    	}
    	sort(diff.begin() , diff.end());
    	div = divisors(diff[0]);
    	sort(div.begin() , div.end() , greater<int>());
    	for(auto i : div){
    		bool f = true;
    		for(auto j : diff){
    			if(j % i){
    				f = false;
    				break;
    			}
    		}
    		if(f){
    			di = i;
    			break;
    		}
    	}
    	int cnt = 1 ; 
    	long long op;
    	while(m[mx-di*cnt]){
    		cnt++;
    	}
    	cnt > n-1 ? op = n : op = cnt;
    	for(int i = 0 ; i < n;i++){
    		op += (mx-v[i]) / di;
    	}
    	cout<<op<<endl;
    	
    }
    return 0;
}