#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n;i++) cout << v[i];
    int k; cin >> k;
    int start = 0;
    ll sum = 0;
    int cnt = 0;
    for (int i = 0 ; i < n;i++){
    	sum += v[i];
    	if(sum > k){
    		while(start <= i && sum > k){
    			sum -= v[start++];
    		}
    		continue;
    	}
    	cnt++;
    }
    cout << cnt;	
    
    return 0;
}