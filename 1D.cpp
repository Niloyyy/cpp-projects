#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
//vector<int>v;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
    	int n , k;cin >> n >> k;
    	string s; cin >> s;
    	int mm = 0;
    	for(int i = 0 ; i < n;i++){
    		if(s[i]=='B') mm++;
    	}
    	int a[mm];
    	for(int i = 0 , j = 0 ; j < mm, i < n;i++){
    		if(s[i]=='B') a[j++] = (i+1);
    	} 
    	// for(int i = 0 ; i < mm;i++) cout << a[i]<<" ";

    	// 	cout <<endl;

    	int cnt = 1; 
    	for (int i = 1 ; i < mm;i++){
    	if(a[i]-a[i-1] + 1 >= k){
    		cnt++;
    		i++;
    	  }
    	 }
    	 if(mm == 0){
    	 cout<<0<<endl;
    	}else
    	cout<<cnt<<endl;
    }	
    
    return 0;
}