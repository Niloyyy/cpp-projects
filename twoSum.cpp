#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int n;

int bs(vector<int>tmp , int x , int vv){
	int l = 0 , r = n-1 , m;
	while(l <= r){
		m = (l + r) / 2;
		if(vv+tmp[m] == x) return tmp[m];
		if(vv+tmp[m] > x) r = m - 1;
		else l = m + 1;
	}
	return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin >> n >> x;
    vector<int>v(n) , tmp(n);
    for(int i = 0 ; i < n;i++){
    	cin >> v[i];
    	tmp[i] = v[i];
    }
    sort (tmp.begin() , tmp.end());
    int fi , la , ans = -1;
    for(int i = 0 ; i < n;i++){
    	ans = bs(tmp , x , v[i]);
    	if(ans == -1) continue;
    	else
    	{
    		fi = v[i];
    		la = ans;
    		break;
    	}
    }
    if(ans == -1) cout <<"IMPOSSIBLE";
    else{
    	for(int i = 0 ; i < n;i++){
    		if(fi==v[i]) fi = i;
    		else if(la==v[i]) la = i;
    	}
    	cout <<fi<<" "<<la;
    }
    
    
    return 0;
}