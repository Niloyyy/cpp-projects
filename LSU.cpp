#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define int long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;


bool cmp(pair<char, int>& a, 
        pair<char, int>& b) 
{ 
    return a.second > b.second; 
}  
vector<pair<char , int>> sort(map<char, int>& M) 
{ 
 
    // Declare vector of pairs 
    vector<pair<char, int> > A; 
 
    // Copy key-value pair from Map 
    // to vector of pairs 
    for (auto& it : M) { 
        A.push_back(it); 
    } 
 
    // Sort using comparator function 
    sort(A.begin(), A.end(), cmp); 
    return A; 
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n  , c; cin >> n >> c;
    	string s; cin >> s;
    	map<char , int>m;
    	for(int i = 0 ; i < s.size();i++){
    		m[s[i]]++;
    	}
    	vector<pair<char , int>> mm = sort(m);
    	int ans = 0;
    	int ini = 0;
    	for(auto i : mm){
    		if( (i.s + ini) * (i.s + ini + 1) / 2 - ini * (ini + 1) / 2  < c){
    			ans += (i.s + ini) * (i.s + ini + 1) / 2 - ini * (ini + 1) / 2;
    			ini += i.s;
    		}else ans += c;
    		
    	}
    	cout<<ans<<endl;
    	
    }
    return 0;
}