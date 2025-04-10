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
    	int a , b , c; cin >> a >> b >> c;
    	if(b % 3 == 0) cout<< a + (b / 3) + ((c % 3 == 0 )? c / 3 : c / 3 + 1)<<endl;
    	else if((b % 3 + c) >= 3){
    		if(b%3) c = c - (3 - b % 3);
    		//if(b % 3 == 0) cout<< a + b / 3 + ((c % 3 == 0 )? c / 3 : c / 3 + 1)<<endl;
    		 cout<< a + (b / 3) + 1 + ((c % 3 == 0 ) ? c / 3 : c / 3 + 1)<<endl;
    	}else{
    		cout<<-1<<endl;
    	}
    }
    return 0;
}