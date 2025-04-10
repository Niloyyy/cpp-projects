#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	int x = s.size() / 6;
    	int y = s.size() % 6;
    	int w = 0 , sum = 0;
    	for(int i = 0 ; i < s.size();i++){
    		if(s[i] >= '0' && s[i] <= '6') sum += s[i] - '0';
    		if(s[i]=='W') wi++;
    	}
    	if(x > 0 && sum > 0 && wi > 0){
    		cout <<x<<"."<<y<<" "<<"Overs"<<" "<<sum<<" "<<"Runs " <<wi<<" Wickets"<<endl;
    	}else if(x < 0 && sum > 0 && wi > 0 ){
    		cout <<x<<"."<<y<<" "<<"Over"<<" "<<sum<<" "<<"Runs " <<wi<<" Wickets"<<endl;
    	}else if(x > 0 && sum < 0 && wi > 0){
    		cout <<x<<"."<<y<<" "<<"Overs"<<" "<<sum<<" "<<"Run " <<wi<<" Wickets"<<endl;
    	}else if(x > 0 && sum > 0 && wi < 0){
    		cout <<x<<"."<<y<<" "<<"Overs"<<" "<<sum<<" "<<"Runs " <<wi<<" Wicket"<<endl;
    	}
    }
    
    return 0;
}