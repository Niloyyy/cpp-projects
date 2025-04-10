#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m; cin >> n >> m;
    	priority_queue<int> a , b;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		a.push(x);
    	}
    	for(int i = 0 ; i < m;i++){
    		int x; cin >> x;
    		b.push(x);
    	}
    	while(!a.empty() and !b.empty()){
    		int x = a.top();
    		int y = b.top();
    		a.pop();
    		b.pop();
            //cout<<x<<" "<<y<<" "<<a.size()<<" "<<b.size()<<endl;
    		if(x == y) continue;
    		if(x > y){
    			a.push(x - y);
    		}else{
    			b.push(y - x);
    		}
    	}
    	if(a.empty() and b.empty()) cout<<"Draw\n";
    	else if(a.empty()) cout<<"Tenzing\n";
    	else cout<<"Tsondu\n";
    
    }
    return 0;
}
