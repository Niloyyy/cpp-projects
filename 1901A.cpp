    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define endl '\n'

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int tc; cin >> tc;
        while(tc--){
        	int n , x ; cin >> n >> x;
        	vector<int>v(n);
        	int ans = INT_MIN;
        	for(int i = 0 ; i < n ; i++){
        		cin >> v[i];
        		if(i > 0) ans = max(v[i]-v[i-1] , ans);
        	}
        	if(n == 1) cout << max(v[n-1] , 2*(x - v[n-1]) )<<endl;
        	else
        	cout << max({v[0] , ans , 2*(x - v[n-1])})<<endl;
        }
        
        return 0;
    }