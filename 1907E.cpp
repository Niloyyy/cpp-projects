#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	string n; cin >> n;
        long long ans = 1;
    	for(int s = n.size()-1 ; s >= 0 ;s--){
            int frq = 0;
            for(int i = 0 ; i <= 9 ;i++){
                for(int j = 0 ; j <= 9;j++){
                    for(int k = 0 ; k <= 9;k++){
                        if((i+j+k) == n[s] - '0') frq++;
                    }
                }
            }
            ans *= frq;
        }
        cout<<ans<<endl;
    }
    return 0;
}