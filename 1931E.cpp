#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int trailling_zero(int x){
	int cnt = 0;
	while(x){
		if(x % 10) break;
		cnt += x % 10 == 0 ? 1 : 0;
		x /= 10;
	}
	return cnt;
}

bool comp(int x , int y){
	return trailling_zero(x) > trailling_zero(y);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m , cnt = 0; cin >> n >> m;
    	vector<int>v(n) , tz;
    	for(auto &i : v){
    		cin >> i;
    		if(trailling_zero(i)) tz.push_back(i);
    		else cnt += ((int)log10(i) + 1);
    	}
    	sort(tz.begin() , tz.end() , comp);
    	for(int i = 0 ; i < tz.size();i++){
    		cnt += ((int)log10(tz[i]) + 1) - !(i&1)*(trailling_zero(tz[i]));
    	}
    	//cout<<cnt<<endl;
    	--cnt >= m ? cout<<"Sasha"<<endl : cout<<"Anna"<<endl;
    }
    return 0;
}