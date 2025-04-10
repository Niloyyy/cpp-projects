#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int bs_in_rotated_array(vector<int>v , int n , int x){
	int l = 0 , h = n-1 , m;
	while(h >= l) {
		m = (l + h) / 2;
		if(v[m] == x) return m;
		if( v[h] >= v[m] ){
			if(v[h] >= x && v[m] <= x) l = m + 1;
			else h = m - 1;
		}else{
			if(v[l] <= x && v[m] >= x) h = m - 1;
			else l = m + 1;
		} 	 
	}
	return -1; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n;i++) cin >> v[i];
    int target; cin >> target;
    int ans = bs_in_rotated_array(v , n , target);
    if(ans == -1) cout <<"target is not found";
    else cout <<ans+1;

    return 0;
}