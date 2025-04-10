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

void merge(vector<int>&a , int l , int m , int r){
    int lp = l , rp = m + 1;
    vector<int>temp;
    while(lp <= m or rp <= r){
        if(lp > m){
            temp.push_back(a[rp++]);
        }else if(rp > r){
            temp.push_back(a[lp++]);
        }else if(a[rp] > a[lp]){
            temp.push_back(a[lp++]);
        }else{
            temp.push_back(a[rp++]);
        }
    }
    for(int i = l ; i <= r;i++){
        a[i] = temp[i-l];
    }
}

void Sort(vector<int>&a , int l , int r){
    if(l >= r) return;
    int m = l + (r - l) / 2;
    Sort(a , l , m);
    Sort(a , m + 1 , r);
    merge(a , l , m , r);
    
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    vector<int>a;
    int x;
    while(cin>>x){
        a.push_back(x);
    }
    Sort(a , 0 , a.size()-1);
    for(auto i : a) cout<<i<<' ';
    return 0;
}	