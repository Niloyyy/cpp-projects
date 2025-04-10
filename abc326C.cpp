#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , 1};

long long gcd(long long x , long long y){
    if(y) return gcd(y , x % y);
    else return x;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
        cout << gcd( 6 , 9);

    }
    return 0;
}