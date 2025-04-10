#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 5e5 + 9;
int seg[4*N];

void build(int ind , int l , int h , vector<int>&arr){
    if(l == h){
        seg[ind] = arr[l];
        return;
    }
    int m = l + (h - l) / 2;
    build(2 * ind + 1 , l , m , arr);
    build(2 * ind + 2 , m + 1 , h , arr);
    seg[ind] = min(seg[2 * ind + 1] , seg[2 * ind + 2]);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int>arr(n);
    for(int i = 0 ; i < n;i++) cin >> arr[i];
    build(0 , 0 , n - 1 , arr);
    for(int i = 0 ; i < 15;i++) cout<<seg[i]<<' ';

    return 0;
}