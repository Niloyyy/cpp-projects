#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int n;
long long v[100010];
long long s = 0;
map<long long , long long> mp;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		s += a[i];
		mp.insert(make_pair(sum , i));
	}	
	if(s & 1){
		cout<< "NO";
		return 0;
	}
	s =/ 2;
	for(int i = 1 ; i < n ; i++){
		if(mp.find(s + v[i]) != mp.end() && mp[s + v[i]] > i){
			cout<< "YES";
			return 0;
		}
	}
	for(int i = 2 ; i <= n ;i++){
		if(mp.find(s - v[i]) != mp.end() && mp[s - v[i]] < i){
			cout<< "YES";
			return 0;
		}
	}
	cout<<"NO";
}