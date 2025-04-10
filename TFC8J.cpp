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
    while(tc--){
        int n , m; cin >> n >> m;
        vector<int>A(n) , B(m); 
        queue<int>a , b;
        int mm = max(n , m);
        for(int i = 0 ; i < n;i++){
        	cin >> A[i];
        }
        for(int i = 0 ; i < m;i++){
        	cin >> B[i];
        }
        sort(A.begin() , A.end());
        sort(B.begin() , B.end());
        for(int i = 0 ; i < n;i++){
        	a.push(A[i]);
        }
        for(int i = 0 ; i < m;i++){
        	b.push(B[i]);
        }

        string ans;
        //cout << a.front()<<" "<<b.front();
        while(mm--){
        	int aa = a.front();
        	int bb = b.front();
        	if(aa == bb or aa > bb){
        		b.pop();
        	}else{
        		a.pop();
        	}

        	if(a.empty()){
        		ans = "MechaGodzilla";
        		break;
        	}else if(b.empty()){
        		ans = "Godzilla";
        		break;
        	}
        	else{
        		ans = "uncertain";
        	}
        }
        if(!tc) cout <<ans;
        else cout <<ans<<endl;
    }
    return 0;
}	