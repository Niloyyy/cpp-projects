#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define MOD 1e9 + 7
using namespace std;
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

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , t; cin >> n;
    	t = n;
    	int a[] = {10 , 11 , 100 , 101 , 111 , 1001};
    	int rem;
    	while(t > 10){
            for(int i = 0 ; i < 6 ;i++){
                if(t % a[i] == 0){
                    t /= a[i];
                }
                if(t < 10){
                    if(t == 1 ) cout<< "yes\n";
                    else cout<<"no\n";
                    return 0;
                }
            }
            if(t == n){
                cout<<"n\n";
                return 0;
            }
        }
        //cout<<t;

    }
    return 0;
}