#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define f first
#define s second
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , x , y , cnt = 0; cin >> n >> x >> y;
    	map< pair<int , int> , int> vodka;
    	for(int i = 0 ; i < n;i++){
    		int a; cin >> a;
    		vodka[{a%y , a%x}]++;
    	}
    	for(auto i : vodka){
    		int ix = i.f.f;
            int iy = i.f.s;
            int val = i.s;
            if(iy and (x&1)){
                cnt += val * vodka[{ix , x-iy}];
            }else if(iy and !(x&1)){
                if(x == 2*iy){
                    cnt += val * (val - 1) / 2;
                }else{
                    cnt += val * vodka[{ix , x-iy}];
                }
            }else{
                cnt += val * (val - 1) / 2 + vodka[{ix , x}] * val;
            }
            vodka[{ix , iy}] = 0;
    	}
    	cout<<cnt<<endl;
    }
    return 0;
}