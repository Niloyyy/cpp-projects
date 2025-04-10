#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc; 
    while(tc--){
    	int n; cin >> n;
    	string s , f; cin >> s >> f;
    	int sm_na = 0 , s_one = 0 , f_one = 0;
    	for(int i = 0 ; i < n;i++){
    		s[i] != f[i] ? sm_na++ : sm_na;
    		s_one += s[i] - '0';
    		f_one += f[i] - '0';
    	}
    	if((s_one == f_one) && !sm_na ) cout <<0<<endl;
    	else if((s_one == f_one) && sm_na) cout << sm_na / 2<<endl;
    	else{
    		cout << n - sm_na <<endl;
    	}
    }
    
    return 0;
}