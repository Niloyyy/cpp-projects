#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

long long sum_all_divisors(long long num){
	long long sum = 0;
	for (long long i = 1; i <= sqrt(num); i++) {
		long long t1 = i * (num / i - i + 1); 
		long long t2 = (((num / i) * (num / i + 1)) / 2) - ((i * (i + 1)) / 2);
		sum += t1 + t2;
		sum %= mod;

	}
	return sum;
}

int main(){
	long long n;
	cin >> n;
	long long sum = sum_all_divisors(n);
	cout << sum << '\n';
	return 0;
}
