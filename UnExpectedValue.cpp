#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
long long sum = 0;
int n;

long long calculate(long long p, long long q) { 
    int mod = 1e9 + 7, expo; 
    expo = mod - 2; 
 
    // Loop to find the value 
    // until the expo is not zero 
    while (expo) { 
 
        // Multiply p with q 
        // if expo is odd 
        if (expo & 1) { 
            p = (p * q) % mod; 
        } 
        q = (q * q) % mod; 
 
        // Reduce the value of 
        // expo by 2 
        expo >>= 1; 
    } 
    return p; 
} 


void  permute(vector<int>a, int l, int r) { 
	
    if (l == r){
    	 for(auto i = 0 ; i < n - 1 ;i++){
        	//cout<<a[i]<<" ";
        	sum += abs(a[i+1] - a[i]);	
        }
        //cout<<a[n-1]<<" sum: "<<sum<<endl;
    }
    else { 
        // Permutations made 
        for (int i = l; i <= r; i++) { 
  
            // Swapping done 
            swap(a[l], a[i]); 
  
            // Recursion called 
            permute(a, l + 1, r); 
  
            // backtrack 
            swap(a[l], a[i]); 
        } 
    } 
} 

long long fac(int n){
    if(n == 1) return 1;
    return (n % mod) * (fac(n-1) % mod) % mod;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	//int n; 
    	cin >> n;
    	vector<int>v(n);
    	for(int i = 0 ; i < n;i++) cin >> v[i];
    	permute(v , 0 , n-1);
    	cout<<sum / __gcd(sum , fac(n)) <<" " <<fac(n) / __gcd(sum , fac(n))<<" "<<endl;
    	//cout<<calculate(sum , fac(n));	
    
    }
    return 0;
}

// 0 - 0
// 1 - 1
// 2 - 2
// 3 - 16
// 4 - 120
// 5 - 960