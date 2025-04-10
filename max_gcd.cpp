#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n , k; cin >> n >> k;
    long long int sum = 0;
    vector<long long int>v(n);
    for(auto i = 0 ; i < n;i++){
    	long long int x; cin >> x;
    	v[i] = x;
        sum += x;
    }
    vector<long long int>divi;
    
    for(long long int i = 1 ; i * i <= sum;i++){
		  if(sum % i == 0){
			  divi.push_back(i);
			  if(sum / i != i){
				  divi.push_back(sum/i);
			}
		}
	}
	// for(long long int i = 0 ; i < divi.size(); i++) 
	// cout << divi[i]<<endl;
	sort(divi.begin() , divi.end() , greater<long long int>());
	//for(long long int i = 0 ; i < divi.size(); i++) cout << divi[i] <<endl;

	for(long long int i = 0 ; i < divi.size();i++){
		long long int get_mod = 0;
		for(long long int j = 0 ; j < n;j++){
			get_mod += v[j] % divi[i];
		//	cout << get_mod << " ";
		}
		//cout << endl;
		if(get_mod / 2 <= k || (get_mod / 2 + 1) <= k){
			cout << divi[i];
			return 0;
		}
		//cout << get_mod<<endl;
	}

    
    return 0;
}