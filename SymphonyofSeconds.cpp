#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<int , int>fre;
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	fre[x]++;
    } 
    int i = fre.size();
    for(auto it : fre){
    	i--;
    	if(i == 1){
    		cout<<it.second;
    		break;
    	}
    }

    return 0;
}	