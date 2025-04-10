#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector<int>a(n); 
    for(auto &i : a) cin >> i;
    sort(a.begin() , a.end());
	long long sum = a[0];
	for(int i = 1 ; i < n;i++){
		if(sum + a[i] > sum + 1){
			ans = sum + 1;
			break;
		}
		sum += a[i];
	}

    return 0;
}