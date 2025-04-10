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

    int tc = 1; tc = read();
    while(tc--){
    	int n ; n = read();
    	vector< pair<int,int> >v(n);
    	for(int i = 0 ; i < n;i++){
    		v[i].first = read();
    		v[i].second = i+1;
    	}
    	sort(v.begin() , v.end());
    	int pairs = 0;
    	for(int i = 0 ; i < n-1;i++){
    		for(int j = i+1 ; j < n;j++){
    			if( 1LL*v[i].first * v[j].first >= 2 * n){
    				break;
    			}else if(v[i].second + v[j].second == v[i].first * v[j].first){
    				pairs++;
    			}
    		}
    	}
    	// for(auto i : v){
    	// 	cout<<i.first <<" "<<i.second<<endl;
    	// }
    	cout<<pairs<<endl;
    }
    return 0;
}