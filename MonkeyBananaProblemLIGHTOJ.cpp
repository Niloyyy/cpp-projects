#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

//vebechilam greedy approach e hoye jabe pore dekhi eta asole dp probolem :)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
    	int n; cin >> n;
    	long long ans = 0;
    	for(int i = 1 ; i <= (2 * n - 1) ;i++){
            int boro_ta;
            if(i <=  n){
                boro_ta = INT_MIN;
                for(int j = 1 ; j <= i;j++){
                    int x; cin >> x;
                    boro_ta = max(boro_ta , x);
                }
                ans += boro_ta;
                cout<<ans<<endl;
            }else{
                boro_ta = INT_MIN;
                for(int j = 1 ; j <= (2 * n - i);j++){
                    int x; cin >> x;
                    boro_ta = max(boro_ta , x);
                }
                ans += boro_ta;
                cout<<ans<<endl;
            }
        }
    	//cout << ans <<endl;

    }
    return 0;
}