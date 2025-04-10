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

int ub(vector<int>&v , int n , long long target){
    int l = 0 , h = n-1 , ans = -1;
    while(h >= l){
        int m = l + (h - l) / 2;
        if(v[m] > target){
            ans = m;
            h = m - 1;
        }else{
            l = m + 1;
        }
    }
    return ans;
}


int lb(vector<int>&v , int n ,  long long target){
    int l = 0 , h = n-1 , ans = -1;
    while(h >= l){
        int m = l + (h - l) / 2;
        if(v[m] <= target){ //smallest index for a[i] >= target;
            ans = m;
            l = m + 1;
        }else{
            h = m - 1;
        }
    }
    return ans;
}




int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , m , q; cin >> n >> m >> q;
    	vector<int>b(m);
        for(auto &i : b) cin >> i;
        sort(b.begin() , b.end());    
        while(q--){
            int x; cin >> x;
            int j = ub(b , m , x);
            int i = lb(b , m , x);
            if(i != -1 and j != -1) cout<< (b[j] - b[i]) / 2 <<endl;
            else if(i == -1 and j != -1) cout<< b[j] - 1 <<endl;
            else cout<<n - b[i] <<endl;
        }
        //cout<<endl;
    }
    return 0;
}