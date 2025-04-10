#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define MOD 1e9 + 7
using namespace std;
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
    	string s , h , m; cin >> s;
    	h = s.substr(0 , 2) , m = s.substr(3 , 2);
    	//cout<<h<<m;
    	//int t = stoi(h) * 60 + stoi(m);
    	//cout<<t;
    	if(stoi(h) < 12 and stoi(h) >= 1) cout<<s<<"AM"<<endl;
    	else if(stoi(h) == 12 and stoi(m) <= 59) cout<<s<<"PM"<<endl;
    	else if(stoi(h) > 12 ){
    		cout<<stoi(h)%12<<":"<<m<<"PM"<<endl;
    	}
    }
    return 0;
}