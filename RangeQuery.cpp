#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int N = 1e5 + 9;
int cnt[N][22];

calc(){
	for(int i = 1 ; i < N;i++){
		for(int b = 0 ; b < 22 ;b++){
			((1<<b) & i) ? cnt[i][b-21] += (bool)((1<<b) & i) : cnt[i][b-21] = cnt[i-1][b];
		}
	}
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    calc();
    for(int i = 1 ; i < 10 ; i++){
    	for(int b = 0 ; b < 22;b++){
    		cout<<cnt[i][b]<<' ';
    	}
    	cout<<endl;
    }
    // int Q = 1; cin >> Q;
    // while(Q--){
    // 	int l , r , x; cin >> l >> r >> x;
    // 	cout<<cnt[r][x-1]-cnt[l][x-1]<<endl;
    // }
    return 0;
}