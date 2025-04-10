#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    int t = 1;
    while(tc--){
    	int p , k , d; cin >> p >> k >> d;
    	int aa = p % d + k;
    	int ans;
    	int n = 0;
    	while(n*d + p <= p + k){
    		n++;
    		ans = n * d + p;
    	}
    	//aa % d == 0 ? ans = p + k + aa / d : ans = p + k + aa / d + 1;
    	cout << "Case "<<t++<<": "<< ans<<endl;
        
    }
    return 0;
}