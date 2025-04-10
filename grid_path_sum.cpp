#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
set<string>se;

void permutation(string &s , int l , int r){
    if(l == r) se.insert(s);
    else{
        for(int i = l ; i <= r;i++){
            swap(s[l] , s[i]);
            permutation(s , l+1 , r);
            swap(s[l] , s[i]);
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<vector<int>>a(n , vector<int>(n));
    for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < n;j++){
            cin >> a[i][j];
        }
    }
    if(n == 1){
        cout<<a[0][0];
        return 0;
    }
    string s = "";
    for(int i = 1 ; i < n;i++) s += 'R';
    for(int i = 1 ; i < n;i++) s += 'D';    
    permutation(s , 0 , s.size()-1);
    int ans = INT_MIN;
    for(auto set : se){
        int sum = 0;
        int i = 0 , j = 0 , k = 0;
        while(i != n and j != n and k != set.size()){
            sum += a[i][j];
            if(set[k] == 'R') i++;
            else j++;
            k++;
        }
        sum += a[i][j];
        ans = max(sum , ans);
    }    
    cout<<ans;
    return 0;
}