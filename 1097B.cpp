#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int>v(n);
    int ss = 0;
	for(int i = 0 ; i < n;i++) cin >> v[i];
    for(int i = 0 ; i < (1 << n);i++){
    	int sum = 0;
    	for(int j = 0 ; j < n;j++){
    		(i &(1 << j)) ? sum += v[j] : sum-= v[j];
    		//cout << sum<<" ";
    	}
    	//cout <<sum<<endl;
    	if(sum % 360 == 0){
    		cout <<"YES";
    		return 0;
    	}
    }	
    cout <<"NO";
    
    return 0;
}