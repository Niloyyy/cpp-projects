#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int n , m , k;
bool can_be_frnd( int a , int b){
	int kk = 0;
	for(int i = 0 ; i < 32;i++){
		if( (a & 1 << i) != (b & 1 << i) ) kk++;
	}

	return k >= kk;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    vector<int>v(m+1);
    for(int i = 0 ; i <= m ;i++){
    	cin >> v[i];
    }
    int ans = 0;
    for(int i = 0 ; i < m;i++){
    	if(can_be_frnd(v[m] , v[i])) ans++;
    }
    cout << ans;

    
    return 0;
}