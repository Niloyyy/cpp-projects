#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , t; cin >> n >> t;
    for(int i = 0; i < n;i++){
    	int d , rat; cin >> d >> rat;
    	if(d == 1 and t <= 2799 and rat > 0) t += rat;
    	else if(d == 2 and t <= 2399 and rat > 0) t += rat;
    }
    cout<<t;   

    return 0;
}