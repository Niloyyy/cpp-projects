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
    while(tc--){
        int n; cin >> n;
        vector<int>v(n);
        for(auto &i : v) cin >> i;
        sort(v.begin() , v.end() , greater<int>());
        for(int i = 0 ; i < n;i++){
        	if(i!=n-1) cout << v[i]<<" ";
        	else cout << v[i];
        }
        if(tc)cout <<endl;
        	
    }
    return 0;
}