#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int cnt_div[N];

int ans = 1;
 
void do_my_command(int x){
	for(int i = 1 ; i * i <= x;i++){
		if(x % i == 0){
			cnt_div[i]++;
			if(x / i != i){
				cnt_div[x / i]++;
			}
			if(cnt_div[i] > 1) ans = max(i, ans);
			if(cnt_div[x / i] > 1) ans = max(x / i, ans);
		}
	}
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	do_my_command(x);

    }
    cout<<ans;
    return 0;
}
