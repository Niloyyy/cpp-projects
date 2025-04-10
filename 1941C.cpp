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
    	int n; cin >> n;
    	string s; cin >> s;
    	int cnt1 = 0 , cnt2 = 0;
    	for(int i = 0 ; i < n-2;i++){
    		if(s.substr(i , 3) == "map"){
    			cnt1++;
    		}
    		if(s.substr(i , 3) == "pie"){
    			cnt1++;
    		}
    	}
    	for(int i = 0 ; i < n-4;i++){
    		if(s.substr(i , 5) == "mapie"){
    			cnt2++;
    		}
    	}
    	cout<<cnt1 - cnt2<<endl;
    }
    return 0;
}