//finding two diff numbers in an array while the rest every element occurs exactly twice 
// if the array is  a[] = {4 , 5 , 6 ,3 , 5 , 6 , 3 , 7}
// ans = 4 , 7;

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int>v(n);
    int xr = 0;
    for(int i = 0 ; i < n;i++){
    	cin >> v[i];
    	xr ^= v[i];
    }
    int num1 = 0 , num2 = 0;
    int se = __builtin_ctz(xr);
    for(int i = 0 ; i < n;i++) v[i] & (1 << se) ? num1 ^= v[i] : num2 ^= v[i];
    cout << num1 << " " << num2;


    
    return 0;
}