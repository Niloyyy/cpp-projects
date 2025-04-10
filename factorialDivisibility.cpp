#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const int N = 5e5+9;
int a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , x; cin >> n >> x;
    for(int i = 0 ; i < n;i++){
    	int k; cin >> k;
    	a[k]++;
    }
    for(int i = 1 ; i < x;i++){
    	if( a[i] % (i+1) ){
    		cout <<"No";
    		cout <<endl<<i;
    		return 0;
    	}else{
    		a[i+1] += a[i] / (i+1);
    	}
    }
    cout <<"Yes";
    
    return 0;
}