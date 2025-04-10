#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool valid(double x , double y , double z){
	return (x + y > z and x + z > y and y + z > x);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    bool f = 1;
    double x , y , z;
    while(cin >> x >> y >> z){
    	if(valid(x , y , z)){
    		double s = x + y + z; 
    		cout<<fixed<<setprecision(3)<<((1.0 / 3) * sqrt(s * (s - 2 * x) * (s - 2 * y) * (s - 2 * z)));
    	}else cout<<fixed<<setprecision(3)<<-1.000;
    	cout<<endl;
    }
    return 0;
}