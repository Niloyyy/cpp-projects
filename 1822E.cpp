#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
#define f first
#define s second
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n; 
    	string s; cin >> s;
    	vector<int>fre(26,0);
    	for(char c : s){
    		fre[c-'a']++;
    	}
        sort(fre.begin() , fre.end() , greater<int> ());
        for(auto i : fre) cout<<i<<' ';
    	for(int i = 0 ; i < 26;i++){
    		for(int j = 0 ; j < 26;j++){
    			if(i != j and fre[i] and fre[j]){
    				if(fre[i] >= fre[j]){fre[i] -= fre[j]; fre[j] = 0;} 
    				else {fre[j] -= fre[i];  fre[i] = 0;}
    			}
    		}
    	}
        //for(auto i : fre) cout<<i<<' ';
    	int cnt = 0;
    	for(auto i : fre) cnt += i;
        //cout<<cnt<<endl;	
    	fre.clear();
        fre.resize(26);
    	if(!cnt){
    		string rep = "";
    		for(int i = 0 ; i < n / 2 ; i++){
    			if(s[i] == s[n-i-1]) fre[s[i] - 'a']++;
    		}
    		//for(auto i : fre) cout<<i<<' ';
    		int mv = 0;
    		for(int i = 0 ; i < 26 ; i++){
    			for(int j = 0 ; j < 26 ;j++){
    				if(i != j and fre[i] and fre[j]){
    					if(fre[i] >= fre[j]){
    						mv += fre[j];
    						fre[i] -= fre[j];
    						fre[j] = 0;
    					}else{
    						mv += fre[i];
    						fre[j] -= fre[i];
    						fre[i] = 0;
    					}
    				}
    			}	
    		}
    		for(int i = 0 ; i < 26; i++){
    			if(fre[i]) mv++;
    		}
    		cout<<mv<<endl;
    	}
    	else cout<<-1<<endl;	


    }
    return 0;
}