#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
vector<int>a;

int bs(double kk , int n){
	int l = 0 , r = n-1 , m;
	while(r >= l){
		m = l + (r-l) / 2;
		if(a[m] > kk ){
			return a[m];
		}else{
			l = m + 1;
		}
	}
	return 1e9+9;
}

int main(){
    ios_base::sync_with_stdio(false);	
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n , m; cin >> n >> m;
    	
    	for(int i = 0 ; i < n;i++){
    	  int x; cin >> x;
    	  a.push_back(x);
    	}
    	
    	sort(a.begin() , a.end());	
    	
    	while(m--){
    		double a , b , c; cin >> a >> b >> c;
    		
    		if(c < 0){ 
    			cout <<"NO\n";
    			continue;
    		}
    		double kk = b - 2*sqrt((long double)(a*c));

    		//cout << kk << endl;
    		int ans = bs(kk , n);
    	  if(ans == 1e9+9) cout <<"NO\n"<<endl;
    	  else cout <<"YES\n"<<ans<<endl;
    	}
    	cout <<endl;
    }

    
    return 0;
}