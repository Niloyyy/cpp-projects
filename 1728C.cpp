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
int d(int x){
	int dig = 0;
	while(x){
		x /= 10;
		dig++;
	}
	return dig;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n , op = 0; cin >> n;
    	vector<int>a(n) , b(n);
    	map<int , int>mp_b , mp_a;
    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		if(x > 10){
    			a[i] = d(x);
    			op++;
    		}
    		else{
    			a[i] = x;
    		}
    		mp_a[a[i]]++;
    	}

    	for(int i = 0 ; i < n;i++){
    		int x; cin >> x;
    		if(x > 10){
    			b[i] = d(x);
    			op++;
    		}
    		else{
    			b[i] = x;
    		}
    		mp_b[b[i]]++;
    	}
    	sort(a.begin() , a.end());
    	sort(b.begin() , b.end());

    	// cout<<op<<endl;
    	// for(auto i : a) cout<<i<<" ";
    	// cout<<endl;
    	// for(auto i : b) cout<<i<<" ";

    	cout<<endl<<mp_a[2]<<" "<<mp_b[2]<<endl;
    	cout<<endl<<mp_a[3]<<" "<<mp_b[3]<<endl;

    	for(int i = 2 ; i <= 10;i++){
    		if(i == 10) op += 2 * abs(mp_a[i]-mp_b[i]);
    		op += abs(mp_a[i]-mp_b[i]);

    	}
    	//cout<<op<<endl;

    }
    return 0;
}

//12+