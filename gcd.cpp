#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
vector<int>div;

struct primeFactorization {

	int countOfPf, primeFactor;
};


void generateDivisors(int curIndex, int curDivisor,
					vector<primeFactorization>& arr)
{


	if (curIndex == arr.size()) {
		cout << curDivisor << ' ';
		return;
	}

	for (int i = 0; i <= arr[curIndex].countOfPf; ++i) {
		generateDivisors(curIndex + 1, curDivisor, arr);
		curDivisor *= arr[curIndex].primeFactor;
	}
}

void findDivisors(int n)
{

	vector<primeFactorization> arr;

	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			int count = 0;
			while (n % i == 0) {
				n /= i;
				count += 1;
			}

			arr.push_back({ count, i });
		}
	}

	if (n > 1) {
		arr.push_back({ 1, n });
	}

	int curIndex = 0, curDivisor = 1;

	generateDivisors(curIndex, curDivisor, arr);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , k; cin >> n >> k;
    vector<int>v(n);
    ll plus = 0;
    for(int i = 0 ; i < n;i++){
    	int x; cin >> x;
    	v[i] = x;
    	plus += x;
    }


	for(int i = 0 ; i < div.size( );i++) cout << div[i]<<" ";

	

    
    return 0;
}

