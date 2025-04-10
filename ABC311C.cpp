#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector< vector< int > > graph(n+1);
    for(int i = 1 ;i < n;i++){
    	int x; cin >> x;
    	graph[i].push_back(x);
    }
    
    return 0;
}