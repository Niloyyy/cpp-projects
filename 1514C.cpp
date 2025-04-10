#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll prod = 1;
    vector<int>v;
    for(int i = 1 ; i < n;i++){
       if(__gcd(i , n) == 1){
         v.push_back(i);
         prod *= i;
         prod %= n;
       }
    }
    if(prod == 1){
        cout<<v.size()<<endl;
        for(int i = 0; i < v.size() ;i++) cout <<v[i]<<" ";
    }else{
        cout << v.size()-1<<endl;
        for(int i = 0 ; i < v.size();i++){
            if(v[i] == prod) continue;
            cout <<v[i]<<" ";
        }
    }
    
    return 0;
}