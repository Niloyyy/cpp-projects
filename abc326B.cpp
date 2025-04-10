#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int f(int n){
	for(int k = n; k <= 919;k++){
		int i = k;
		int a = i % 10;
		i /= 10;
		int b = i  % 10;
		i /= 10;
		int c = i % 10;
		//cout << a <<" "<<b <<" "<<c<<endl;
		if(c * b == a) return k;
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ; cin >> s;
    int n = stoi(s);
    int a = s[0] - '0' , b = s[1] - '0' , c = s[2] - '0';
    //cout << a <<' '<<b<<' '<<c<<endl;
    if(a * b == c) cout <<s;
    else{
    	//if(a * b >= 10 || a*b < c) cout <<a+1<<0<<0;
    	 cout<<f(n);

    }

    
    return 0;
}