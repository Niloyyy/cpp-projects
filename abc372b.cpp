#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int po(int x , int y){
	int ans = 1;
	for(int i = 0 ; i < y;i++) ans *= x;
	return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int m , sum = 0; cin >> m;
    vector<int>v;
    while(m){
    	int x = 3 , p = 0;
    	while(po(x , p) <= m and p <= 10){
    		p++;
    	}
    	if(p) p--;
    	v.push_back(p);
    	m -= po(x , p);
    }

    cout<<v.size()<<endl;
    for(auto i : v) sum += po(3 , i);
    for(auto i : v) cout<<i<<' ';
    cout<<sum;	
    return 0;
}