#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};


int ub(vector<int>&v , int n , long long target){
	int l = 0 , h = n-1 , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] > target){
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

int lb(vector<int>&v , int n ,  long long target){
	int l = 0 , h = n-1 , ans = -1;
	while(h >= l){
		int m = l + (h - l) / 2;
		if(v[m] >= target){ //smallest index for a[i] >= target;
			ans = m;
			h = m - 1;
		}else{
			l = m + 1;
		}
	}
	return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int x , y; cin >> x >> y;
    	cout<<__gcd(x,y)<<endl;
    	// if(max(x,y) % min(x, y) == 0){
    	// 	cout << min(x , y)<<endl;
    	// 	continue;
    	// }
    	// if (x % 2 == 0 && y % 2 == 0) cout<<2<<endl;
    	// else cout << 1 <<endl;
    	// while(x != 0){
    	// 	if(x > y) swap(x , y);
    	// 	else{
    	// 		int a = x;
    	// 		x = y - x;
    	// 		y = a;
    	// 	}
    	// 	cout << x <<" "<<y<<endl;
    	// }
    	// cout<<y<<endl;

    }
    return 0;
}