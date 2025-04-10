#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , k; cin >> n >> k;
    vector<int>v(n);
    long long window = 0;
    for(int i = 0 ; i < n;i++) cin >> v[i];
    for(int i = 0 ; i < k;i++) window += v[i];
    double sum = window;
    for(int i = k ; i < n;i++){
    	window += v[i];
    	window -= v[i-k];
    	sum += window;
    }	
    printf("%.10lf" , sum / (n - k + 1) );
    return 0;
}