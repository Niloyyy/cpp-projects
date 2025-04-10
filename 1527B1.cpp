#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n ; cin >> n;
    	string s; cin >> s;
        int cnt_o = 0;
        for(auto c : s){
            if(c == '0') cnt_o++;
        }
        if(cnt_o == 1 or (cnt_o % 2 == 0)) cout<<"BOB\n";
        else cout<<"ALICE\n";
    }    
    return 0;
}