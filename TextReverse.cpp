#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    cin.ignore();
    while(tc--){
    	string s; getline(cin , s);
    	stringstream str(s);
    	string show;
    	bool chk = true;
    	while(str >> show){
    		reverse(show.begin() , show.end());
    		if(chk) chk = false;
    		else{
    			cout<<' ';
    		}
    		cout<<show;
     	}
    	if(tc) cout <<endl;
    }
    return 0;
}