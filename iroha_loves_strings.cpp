#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , l; cin >> n >>l;
    vector<string>str;
    for(int i = 0 ; i < n; i++){
    	string s; cin >> s;
    	str.push_back(s);
    }
    sort(str.begin() , str.end());
    for(int i = 0 ; i < n;i++){
    	cout<<str[i];
    }
    
    return 0;
}