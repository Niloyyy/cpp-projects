#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    if(n < 5 && (n != 1 && n != 4 )) cout <<"NO SOLUTION";
    else{
    	for(int i = 2 ; i <= n;i+=2) cout<<i<<" ";	
    	for(int i = 1 ; i <= n;i+=2) cout<<i<<" ";
    }
    
    return 0;
}