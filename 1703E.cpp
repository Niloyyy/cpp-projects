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
int ceill(int a , int b){
	if(a % b) return a / b + 1;
	else return a / b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
	char s[n+1][n+1];
	for(int i = 1 ; i <= n;i++){
		for(int j = 1 ; j <= n;j++){
			cin >> s[i][j];
		}
	}
	for(int i = 1 ; i <= n/2;i++){
		for(int j = i ; j <= n-i;j++){
			cout<<s[i][j] <<" "<< s[j][n-i+1]<<endl;
			cout<<s[n-j+1][i] <<" "<< s[n-i+1][n-j+1]<<endl;
			cout<<endl;
		}
		cout<<endl;
	}
    return 0;
}