#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	string s;
    	int cnt = 0;
    	for(int i = 0 ;i < n;i++){
    		for(int j = i ;j < k;j++){
    			if(s[j] == 'B'){
    				cnt++;
    				i+=k;
    				break;
    			}
    		}

    	}
    	cout <<cnt<<endl;
    }
    
    return 0;
}