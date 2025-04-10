#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int , null_type,less<int> , rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define endl '\n'
#define f first
#define s second
using namespace std;
using namespace __gnu_pbds; 
const double PI = acos(-1);
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int _inf = INT_MIN;

bool is_set(int bit , int x){
    return ((1<<bit) & x);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int l , r; cin >> l >> r;
        int a = r , b = 0 , c = 0 , bit;
        for(bit = 30 ; bit >= 0;bit--){
            if(is_set(bit , l ) != is_set(bit , r)){
                c += (1<<bit) - 1;
                break;
            }else{
                if(is_set(bit , r) ) c += (1<<bit) , b += (1<<bit);
            }
        }
        bool f = 0;
        //cout<<bit;
        for( ; bit >= 0;bit--){
            if(is_set(bit , r)){
                f = 1; 
            }
            if(f){
                if(!is_set(bit , r)) b += (1<<bit);
            }
            
            
        }

        //if(b < l) b = a ^ c;
        //else if(c < l) c = a ^ b;
        cout<<a<<' '<<b<<' '<<c<<endl;
        //cout<<(a ^ b) + (b ^ c) + (a ^ c)<<endl;
    }
    return 0;
}

/*

1111111 
1110111
1110000
1111000
*/