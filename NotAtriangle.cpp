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

int bs(vector<int>&v , int l , int x){
	int r = v.size() - 1 , m , ans = -1;
	while(l <= r){
		m = l + (r - l) / 2;
		if(x < v[m]){
			ans = m;
			r = m - 1;
		}else{
			l = m + 1;		
		}
	}
	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(1){
    	int n; cin >> n;
    	if(n == 0) break;
    	vector<int>v(n);
    	for(auto &i : v){
    		cin >> i;
    	}
    	sort(v.begin() , v.end());
    	long long cnt = 0;
    	for(int i = 0 ; i < n - 2;i++){
    		for(int j = i+1; j < n - 1;j++){
    			int x = bs(v , j+1 , v[i]+v[j]);
    			if(x != -1) cnt += (n - x);
    			//cout<<x<<endl;
    		}
    	}
    	cout<<cnt<<endl;

    }
    return 0;
}