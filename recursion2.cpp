#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

ll dp[109];

long long fibo(long long n){
	if(n <= 1) return n;
	if(dp[n]) return dp[n];
	long long first = fibo(n-1);
	long long last = fibo(n-2);
	dp[n] = first + last;
	return dp[n];
}
int mod(int it , int th ,int n){
	if((it - th) < 0)  return (it - th + n);
	else return (it % th);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 8;
    int a = -1 , b = 5; cout<<mod(2 , 3 , 5);
    return 0;
}