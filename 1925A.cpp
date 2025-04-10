#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define MOD 1e9 + 7
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
    string s = "abcdefghijklmnopqrstuvwxyz";
    int tc = 1; cin >> tc;
    while(tc--){
    	int n , k; cin >> n >> k;
    	for(int i = 1 ; i <= n;i++){
    		for(int j = 0 ; j < k; j++){
    			cout<<s[j];
    		}
    	}
    	cout<<endl;
    }
    return 0;
}