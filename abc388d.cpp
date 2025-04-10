#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 5e5 + 5;
vector<int>arr(N);

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for(int i = 1; i <= n;i++) cin >> arr[i];
   	int carr = 0;
    for(int i = 1 ; i <= n;i++){
    	if(arr[i] == 4) cout<<carr<<' ';
    	arr[i] += min(carr , i - 1);
    	carr -= min(carr , i - 1);
    	int x = min(arr[i] , n - i);
    	carr += x;
    	cout<<(arr[i] - x)<<' ';

    }	

    return 0;
}