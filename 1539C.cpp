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

    int tc = 1; //cin >> tc;
    while(tc--){
    	unsigned long long n , k , x; cin >> n >> k >> x;
    	vector<unsigned long long>v(n) , se;
    	for(auto &i : v) cin >> i;
    	sort(v.begin() , v.end());
    	for(int i = 0 ; i < n-1 ;i++){
    		if((v[i+1]-v[i]) > x){
    			if((v[i+1]-v[i]) % x) se.push_back((v[i+1]-v[i]) / x);
    			else se.push_back(((v[i+1]-v[i]) / x) - 1);
    		}
    	}
    	sort(se.begin() , se.end());
    	int group = 1;
    	for(int i = 0 ; i < n-1 ;i++){
    		if((v[i+1] - v[i]) <= x){
    			continue;
    		}else{
    			group++;
    		}
    	}
    	long long cnt = 0;
    	for(auto it : se){
    		if(it <= k){
    			cnt++;
    			k -= it;
    		}else break;
    	}
    	cout<<group-cnt<<endl;	


    }
    return 0;
}