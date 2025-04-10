#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    while(n)
    {
    	int m = n;
    	while(m)
    	{
    		if(m & 1)
    		{
    			cnt++;
    			cnt = cnt % mod;
    			//m >>= 1;
    		}
    		m = m >> 1;
    	}
    	n--;
    }
    cout << cnt;
    
    return 0;
}