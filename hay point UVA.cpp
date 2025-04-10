#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m , n; cin >> m >>n;
    pair<string , int> p[m];
    for(int i = 0 ; i < m;i++){
    	int sal;
    	string ss;
    	cin >> ss >> sal;
    	p[i] = make_pair(ss,sal);
    }
    for(int i = 0 ; i < m;i++){
    	cout <<p[i].first<<" "<<p[i].second<<endl;
    }
    
    return 0;
}