#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
using namespace std;
#define N 1000000

int factors[N+1],phi[N+1];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	fill(factors,factors+N+1,0);
	phi[1] = 1;

	for(int i=2;i<=N;i++){
		if(factors[i]==0){
			factors[i] = i;
			phi[i] = i-1;
		
			if(i<=sqrt(N)) for(int j=i*i;j<=N;j+=i) factors[j] = i;
		}else{
			int aux = i,exp = 0;
		
			while(aux%factors[i]==0){
				aux /= factors[i];
				++exp;
			}
		
			phi[i] = 1;
		
			for(int j=0;j<exp;++j) phi[i] *= factors[i];
			phi[i] -= phi[i]/factors[i];
			phi[i] *= phi[aux];
		}
	}
	
	int tc; cin >> tc;
	while(tc--){
		int n; cin >> n;
		cout<<phi[n]<<endl;
	}
	
	return 0;
}