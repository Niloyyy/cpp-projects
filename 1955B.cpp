#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        long long k;
    	int n; cin >> n >> k;
    	vector<int>v(n);
    	for(int i = 0 ; i < n;i++){
    		cin >> v[i];
    	}
    	int l = 0 , r = n-1 , sinked = 0;
        while(k or r > l){
            if(v[l] == v[r]){
                if(l == r){
                    if(k >= v[r]) k -= v[r] , v[r] = 0;
                    else break;
                }
                if(k >= 2 * v[l]){
                    k -= 2 * v[l];
                    v[l++] = 0;
                    v[r--] = 0;
                }else if(k == 2 * v[l] - 1){
                    v[l+1] > v[r-1] ?  v[r--] = 0 , v[l++] = 1 : v[l++] = 0 , v[r--] = 1;
                    k ^= k;
                }else{
                    break;
                }
            }else if(v[l] > v[r]){
                if(k >= 2*v[r]){
                    k -= 2 * v[r];
                    v[l] -= v[r];
                    v[r--] = 0;
                }else if(k == 2 * v[r] - 1){
                    v[l+1] > v[r-1] ?  v[r--] = 0 , v[l++] = 1 : v[l++] = 0 , v[r--] = 1;
                    k ^= k;
                }else{
                    break;
                }
            }else{
                //cout<<"dukse";
                if(k >= 2 * v[l]){
                    //cout<<l<<' '<<r<<endl;
                    k -= 2 * v[l];
                    v[r] -= v[l];
                    v[l++] = 0;
                }else if(k == 2 * v[l] - 1){
                    v[l+1] > v[r-1] ?  v[r--] = 0 , v[l++] = 1 : v[l++] = 0 , v[r--] = 1;
                    k ^= k;
                }else{
                    break;
                }
            }
            // cout<<l<<' '<<r<<' '<<k<<endl;
            //for(auto i : v) cout<<i<<' ';
            //cout<<endl;
        }

        LR(0 , n-1){
            if(v[i] == 0) sinked++;
        }
        cout<<sinked<<endl;
    }
    return 0;
}