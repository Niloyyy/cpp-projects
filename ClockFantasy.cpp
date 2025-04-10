#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};
void area(double a , double b , double c){
	double s = (a + b + c) / 3;
	cout << sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	
    	area(2 , 2 , 3);
    }
    return 0;
}