#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};
long long dp[109];

int f(int n){
	if(n <= 1) return n;
	return f(n-1)+f(n-2);
}

int fibo(int n){
	if(n <= 1) return n;
	if(dp[n]) return dp[n];
	return dp[n] = fibo(n-1)+fibo(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout<<fibo(n)<<endl<<endl;
    //cout<<f(n);
    for(int i = 0 ; i < 109 ;i++) cout<< dp[i]<<endl;
    return 0;
}