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
vector<int>v;

bool bs(int x , int start){
	int l = start , r = v.size() - 1 , m;
	while(l <= r){
		m = l + (r - l) / 2;
		if(v[m] + x == 0) return true;
		if (v[m] > x) l = m + 1;
		else r = m - 1;
	}
	return false; 
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    map<int , int>fre;
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	fre[x]++;
    	if(fre[x] <= 2)v.push_back(-x);
    }
    
    sort(v.begin() , v.end());
    //for(auto i : v) cout<<i<<' ';
    for(int i = 0 ; i < v.size();i++){
    	for(int j = i + 1; j < v.size()-1; j++){
    		if(bs(v[i] + v[j] , j+1)){
    			cout<<"YES\n";
    			return 0;
    		}
    	}
    }
    cout<<"NO\n"; 	

    return 0;
}