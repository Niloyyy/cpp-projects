#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , x; cin >> n >> x;
    	vector<int>v(n+1);
        vector<int>pre(n+1,0) , suff(n+2,0);
    	for(int i = 1 ; i <= n;i++){
    		cin >> v[i];
    		pre[i] = pre[i-1] + v[i];
    	}
        suff[n] = v[n];
        for(int i = n-1 ; i >= 1;i--){
            suff[i] = suff[i+1] + v[i];
        }
    	int ans = INT_MIN , len = 0 ;
    	long long sum = 0;
    	for(int i = 0 ; i <= n;i++){
    		if((pre[n]-pre[i]) % x){
                len = n - i;
            }
            ans = max(ans , len);
    	}
    	for(int i = n+1 ; i >= 0;i--){
            if((suff[1]-suff[i]) % x){
                len = i-1;
            }
            ans = max(ans , len);
        }
        //for(auto i : suff) cout<<i<<" ";
        cout<<(ans ? ans : -1)<<endl;
    }
    return 0;
}