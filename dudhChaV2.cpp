#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int solve(int v[] ,int n ,int x){
	int hi = n - 1;
	int lo = 0 , mid;
	int ans = -1;
	while(hi >= lo){
		mid = (hi + lo) /2;
		if(v[mid] <= x){
			ans = mid;
			lo = mid+1;
		}else{
			hi = mid-1;
		}
	}
	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , q; cin >> n >> q;
    int a[n];
    for(int i = 0 ; i < n;i++) cin >> a[i];

    sort(a , a + n);
    while(q--){
    	int x; cin >> x;
    	int ans = solve(a , n , x);
    	if(ans == -1) printf("0 ");
    	else printf("%d ", ans+1);
     }	
    
    return 0;
}