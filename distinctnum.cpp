#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int>s;
    while(n--){
    	int x; cin >> x;
    	s.insert(x);
    }
    cout<<s.size();
    
    return 0;
}