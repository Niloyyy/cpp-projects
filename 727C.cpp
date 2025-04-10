#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i+=3){
    	int x , y , z , xy , yz , xz , ix , iy;
    	if(n - i == 2){
    		cout<<"? "<<i+2<<' '<<i+1<<endl;
    		cout<<flush;
    		cin >> xy;
    		cout<<"? "<<i+1<<' '<<i<<endl;
    		cout<<flush;
    		cin >> ix;
    		a[i] = ix - a[i-1];
    		a[i+1] = xy - ix + a[i-1];
    		continue;
    	}else if(n - i == 1){
    		cout<<"? "<<i+1<<' '<<i<<endl;
    		cout<<flush;
    		cin >> ix;
    		a[i] = ix - a[i-1];
    		continue;
    	}  
    	cout<<"? "<<i+1<<' '<<i+2<<endl;
    	cout<<flush;
    	cin >> xy;
    	
    	cout<<"? "<<i+2<<' '<<i+3<<endl;
    	cout<<flush;
    	cin >> yz;
    	
    	cout<<"? "<<i+1<<' '<<i+3<<endl;
    	cout<<flush;
    	cin >> xz;
    	
    	a[i] = (xy + xz - yz) / 2;
    	a[i+1] = (xy + yz - xz) / 2;
    	a[i+2] = (xz + yz - xy) / 2; 
    }
    cout<<"! ";
    for(int i = 0 ;i < n;i++) cout<<a[i]<<' ';
    cout<<endl;	
    cout.flush();	

    return 0;
}