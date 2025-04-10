#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x , y; cin >> x >> y;
    if(x > y){
    	x - y <= 3 ? cout <<"Yes" : cout <<"No";
    }else{
    	y - x <= 2 ? cout <<"Yes" : cout <<"No";
    }
   
    
    return 0;
}