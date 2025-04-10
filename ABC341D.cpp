#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};
unsigned long long lcm(unsigned long long n , unsigned long long m ){
	return (n * m) / __gcd(n , m);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n , m , k , l = 1 , ans = -1 , r = 1e18 , mid; 
    cin >> n >> m >> k;
    while(l <= r){
    	mid = l + (r-l) / 2;
    	unsigned long long extra = mid / lcm(n , m);
    	unsigned long long chk = (mid / n) + (mid / m) - 2*extra;
    	if(chk == k){
    		if(mid % n and mid % m) r = mid - 1;
    		else if(mid % n == 0 and mid % m == 0){
    			ans = ans;
    		}else{
    			ans = mid;
    			//cout<<ans<<endl;
    		}
    	}
    	if(chk < k){
    		l = mid + 1;
    	}else{
    		r = mid - 1;
    	}
    }
    
    cout<<ans;
    return 0;
}