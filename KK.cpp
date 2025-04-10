#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

ull GCD(ull x , ull y){
	if(y) return GCD(y , x % y);
	else return x;
}


ull lcm(ull a , ull b){
	return 1ULL*a*b / GCD(a , b);
}


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

    int tc = 1; //cin >> tc;
    while(tc--){
    	ull A  , B , c , d; cin >> A >> B >> c >> d;
    	if(A == B){
    		if(A % c == 0 || B % d == 0) cout<<0;
    		else cout<<1;
    		return 0;
    	}
    	ull a = max(A , B);
    	ull b = min(A , B);
    	ull ans1 = (a/c - (b-1)/c);
    	ull ans2 = (a/d - (b-1)/d);
    	ull ans3 = (a/lcm(c , d) - (b-1) / lcm(c,d));
    	// ans1 < 0 ? ans1 = -ans1 : ans1 = ans1;
    	// ans1 < 0 ? ans2 = -ans2 : ans2 = ans2;
    	// ans1 < 0 ? ans3 = -ans3 : ans3 = ans3;
    	//cout<<ans1<<" "<<ans2<<" "<<ans3;

    	cout<<max(a , b)-min(a ,b) + 1 - (ans1+ans2-ans3);


    }
    return 0;
}