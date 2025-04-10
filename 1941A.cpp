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
    	int n , m , k; cin >> n >> m >> k;
    	vector<int>a(n) , b(m);
    	for(auto &i : a) cin >> i;
    	for(auto &i : b) cin >> i;
    	int ways = 0;
    	for(int i = 0 ; i < n;i++){
    		for(int j = 0 ; j < m;j++){
    			if(a[i]+b[j] <= k){
    				ways++;
    				//break;
    			}
    		}
    	}
    	cout<<(4^1)<<endl;	

    }
    return 0;
}