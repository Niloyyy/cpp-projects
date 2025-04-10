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

int c(int a , int b){
	if(a % b) return ((a / b) + 1);
	else (a / b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , t_one = 0 , t_zero = 0; cin >> n;
    	//vector<int>v(n);
    	string v; cin >> v;
    	for(auto i = 0 ; i < n;i++){
    		//cin >> v[i];
    		if(v[i] == '1') t_one++;
    		else t_zero++;
    	}
    	//cout<<t_one<<" "<<t_zero<<endl;
    	int ans = 0 , one = 0 , zero = 0;
    	for(int i = 0 ; i < n;i++){
    		if( c(zero , 2) > c(one , 2) and c(t_one - one , 2 ) > c(t_zero - zero , 2)){
    			ans = i;
    			break;
    		}
    		if(v[i] == '1') one++;
    		else zero++;

    	}
    	cout<<ans<<endl;
    }
    return 0;
}

//ceil(t_zero/2.0) <= zero and ceil(t_one/2.0) >= one