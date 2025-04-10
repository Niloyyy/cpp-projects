#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int n , m; cin >> n >> m;
    vector<string>s(n);
    for(int i = 0 ; i < n;i++) cin >> s[i];
    bool f = 1;
    sort(s.begin() , s.end());
    do{
        f = 1;
        for(int i = 0 ; i + 1 < n;i++){
            int dif = 0;
            for(int j = 0 ; j < m;j++){
                dif += s[i][j] != s[i+1][j];
            }
            if(dif != 1){
                f = 0;
                break;
            }
        }
        if(f){
            cout<<"Yes";
            return 0;
        }
    }while(next_permutation(s.begin() , s.end()));
    cout<<"No";
    return 0;
}