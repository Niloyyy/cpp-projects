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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	vector<int>v(n);
    	long long p = 1;
    	for(auto &i : v){
    		cin >> i;
    		p *= i;
    	}
    	long long d = 1 << n;
    	if(p % d == 0){
    		cout<<0<<endl;
    		continue;
    	}
    	long long g = __gcd(p , d);
    	//long long lagbe = p / g;
    	//cout<<d<<" "<<g<<endl;
    	if(g == 1) cout<<-1<<endl;
    	else{
    		int cnt = -1;
    		long long lagbe = d / g;
    		for(int i = n ; i > 1;i--){
    			if(lagbe % i == 0){
    				if(cnt == -1) cnt += 2;
    				else cnt++;
    				lagbe /= i;
    			}
    		}
    		if(lagbe==1) cout<<cnt<<endl;
    		else cout<<-1<<endl;
    	}

    }
    return 0;
}