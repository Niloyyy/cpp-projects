#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int num_of_digit(long long n){
	ll tmp = n;
	int ans = 0;
	while(tmp){
    		tmp /= 10;
    		ans++;
    	}
    	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n ; cin >> n;
    vector<ll>d;
    for(ll i = 1 ; i * i <= n; i++){
    	if( n % i == 0){
    		d.push_back(i);
    		if( n / i != i) d.push_back(n / i);
    	}
    }
    sort(d.begin() , d.end());
    //for(auto it : d) cout <<it<<' ';

    //cout <<endl;	
    int sz = d.size();
    if(sz&1){
    	long long tmp = d[sz/2];
    	//cout << tmp<<endl;
    	cout << num_of_digit(tmp);
    }else{
    	long long tmp_r = d[sz/2];
    	long long tmp_l = d[sz/2 - 1];
    	cout << max(num_of_digit(tmp_l) , num_of_digit(tmp_r));
    	//cout<<"h";  

    }
    
    return 0;
}