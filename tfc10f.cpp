#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll sum = 0;
    while(scanf("%d" , &n) != EOF){
    	//ll sum = 0;
    	vector<int>ans;
    	vector< pair<ll , ll> > pi;
    	for(int i = 0 ;i < n;i++){
    		ll x , y; cin >> x >> y;
    		pi.push_back({x,y});	
    	}
    	for(int i = 0 ; i < n;i++){
    		set<ll>st;
    		ll x1 = pi[i].first;
    		ll y1 = pi[i].second;
    		for(int j = i+1 ; j < n;j++){
    			ll x2 = pi[j].first;
    			ll y2 = pi[j].second;
    			ll x = (ll)(x1-x2)*(x1-x2) + (ll)(y1-y2)*(y1-y2);
    			
    			st.insert(x);
    			//cout<<sqrt(x)<<" ";
    		}
    		int x = (n-i)-(st.size()+1);
    		ans.push_back(x*(x+1)/2);
    		//cout<<x<<" ";
    		//for(auto it : st) cout << it<<" ";
    		//cout <<endl;	
    	}
    	for(auto it : ans) sum += it;

    }
	cout << sum<<endl;

    return 0;
}