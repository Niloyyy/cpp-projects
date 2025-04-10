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


int left(vector<int>&v , int l , int x){
	//if(x <= 0) return 0;
	int r = v.size() - 1 , m , ans = -1;
	while(l <= r){
		m = l + (r - l) / 2;
		if(v[m] >= x){
			ans = m;
			r = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

int right(vector<int>&v , int l , int x){
	if(x <= 0) return 0;
	int r = v.size() - 1 , m , ans = -1;
	while(l <= r){
		m = l + (r - l) / 2;
		if(v[m] <= x){
			ans = m;
			l = m + 1;
			//r = m - 1;
		}else{
			r = m - 1;
			//l = m + 1;
		}
	}
	return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; tc = read();
    while(tc--){
    	int n , l , r ; n = read() , l = read() , r = read();
    	long long cnt = 0;
    	vector<int>v(n);
    	for(auto &i : v) i = read();
    	sort(v.begin() , v.end());
    	for(int i = 0 ; i < n;i++){
    		int a = left(v , i + 1 , l - v[i]);
    		int b = right(v , i + 1 , r - v[i]);
    		if(a != -1 and b != -1 and (v[i] + v[a] >= l and v[i] + v[b] <= r)){
    			cnt += 1LL*(b-a+1);
    		}
    		//cout<<a<<" "<<b<<endl;
    		
    	}	
    	cout<<cnt<<endl;
    }
    return 0;
}