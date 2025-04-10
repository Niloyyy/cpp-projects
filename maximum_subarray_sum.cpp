#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; //cin >> tc;
    while(tc--){
        int n; cin >> n;
        long long sum = 0 , ans = LLONG_MIN;
        for(int i = 0 ; i < n;i++){
            int x; cin >> x;
            sum += x;
            ans = max(sum , ans);
            sum < 0 ? sum = 0 : sum = sum ;
        }

    /*
        int sum = 0 , best = INT_MIN;
        for(int i = 0 ; i < n;i++){
            int x; cin >> x;
            sum = max(x , x + sum);
            best = max(best , sum);
        }
    */
        cout <<ans<<endl;
    }
    
    return 0;
}