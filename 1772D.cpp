#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

bool check1(vector<int>v){
	bool f = false;	
	for(auto i = 1 ; i < v.size();i++){
		if((v[i] - v[i-1]) >= 0){
			f = true;
		}else{
			return false;
		}
	}
	return f;
}

bool check2(vector<int>v){
	bool f = false;	
	for(auto i = 1 ; i < v.size();i++){
		if((v[i] - v[i-1]) <= 0){
			f = true;
		}else{
			return false;
		}
	}
	return f;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n;
    	vector<int>v(n);
    	for(auto i = 0 ; i < n;i++){
    		cin >> v[i];
    	}
    	if(check1(v) or check2(v)){
    		v[0] > v[n-1] ? cout<<v[0]<<endl : cout<<0<<endl;
    	}else{
    			int x = INT_MAX;
			    for(int i = 1; i < n;i++){
				if(v[i] != v[i-1] && (v[i]+v[i-1]) % 2 == 0){
					x = min(x , ((v[i]+v[i-1] + 1) / 2));
				}
    		}
    		for(auto &i : v){
    			x >= i ? i = x - i : i -= x;
    		}
    		if(check1(v)){
    			cout<<x<<endl;
    		}else{
    			cout<<-1<<endl;
    		}

    		// for(auto &i : v){
    		// 	  cout<<i<<endl;
    		// }
    	}


    }
    return 0;
}