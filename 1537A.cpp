#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	int sum = 0;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		sum += x;
    	}
    	(sum <= 0 || sum < n) ? cout <<1<<endl : cout << sum - n <<endl;
    }
    
    return 0;
}