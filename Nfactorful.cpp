#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
vector<int>pri;

void Sieve(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n; p++)
		if (prime[p]) pri.push_back(p);
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Sieve(1000000);
    int tc; cin >> tc;
    while(tc--)
    {
    	int a , b , n; cin >> a >> b >> n;
    	int ans = 0;
    	for(int i = a ; i <= b;i++)
    	{
    		int j = 0;
    		if(i == 1 && n == 0)
    		{
    			ans++;
    			continue;	
    		}
    		int cnt = 0;
    		while(pri[j]<=i)
    		{
    		if(i % pri[j++] == 0) cnt++;
    		}
    		if(cnt == n) ans++;
    	}
    cout << ans <<endl;
    }

    
    return 0;
}