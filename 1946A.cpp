#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define MOD 1e9 + 7
using namespace std;
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
    	for(auto &i : v) cin >> i;
    	sort(v.begin() , v.end());
    	int sz = (n&1) ? n / 2 + 1 : n / 2 , op = 1;
    	for(int i = sz - 1; i < n - 1;i++){
    		if(v[i] == v[i+1]) op++;
    		else break;
    	}
    	cout<<op<<endl;	

    }
    return 0;
}