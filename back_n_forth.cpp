#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int sx , sy , tx , ty; cin >> sx >> sy >> tx >> ty;
    for(int i = 0 ;i < (tx-sx) ; i++)cout <<"R";
    for(int i = 0 ;i < (ty-sy) ; i++)cout <<"U";
    for(int i = 0 ;i < (tx-sx) ; i++)cout <<"L";
    for(int i = 0 ;i < (ty-sy) ; i++)cout <<"D";

    cout << "D";
	for(int i = 0 ;i < (tx-sx + 1) ; i++)cout <<"R";
    for(int i = 0 ;i < (ty-sy + 1) ; i++)cout <<"U";
    cout << "L"<<"U";
    for(int i = 0 ;i < (tx-sx + 1) ; i++)cout <<"L";
    for(int i = 0 ;i < (ty-sy + 1) ; i++)cout <<"D";
    cout <<"R";


    
    return 0;
}