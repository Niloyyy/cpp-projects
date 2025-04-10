#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define endl '\n'
const int N = 3e6 + 1;
int spf[N];


int power(int a , int b ){
  if(b == 1) return a;
  if(b&1){
    int x = power(a , b / 2);
    return (1LL * x * x);
  }else{
    return (power(a , b - 1) * a);
  }
}

void sieve(){
	for(int i = 1 ; i < N;i++){
		i & 1 ? spf[i] = i : spf[i] = 2;
	}
	for(int i = 3 ; i * i < N;i++){
		if(spf[i] == i){
			for(int j = i * i ; j < N;j+=i){
				spf[j] = i;
			}
		}
	}
}

map<int , int> get_factorization(int n){
	map<int , int>ret;
	while(n != 1){
		ret[spf[n]]++;
		n /= spf[n];
	}
	return ret;
}
//sum of divisors
int phi(map<int,int>prime_fact){
	long long a = 1 , b = 1;
	for(auto i : prime_fact){
		a *= (1LL * power(i.F , i.S+1) - 1);
		b *= (i.F - 1);
	}
	return a / b;
}
//number of divisors
long long tau(map<int,int>prime_fact){
	long long a = 1;
	for(auto i : prime_fact){
		a *= (i.S + 1);
	}
	return a;
}

//product of divisors
long long sigma(map<int,int>prime_fact , int n){
	return power(n , tau(prime_fact) / 2);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int n; cin >> n;
    map<int,int>prime_fact = get_factorization(n);
    for(auto i : prime_fact){
    	cout<<i.F<<" = "<<i.S<<endl;
    }

    cout<<"Number of divisors = "<<tau(prime_fact)<<endl;
    cout<<"Sum of divisors = "<<phi(prime_fact)<<endl;
    cout<<"Product of divisors = "<<sigma(prime_fact , n)<<endl;
    return 0;
}


