#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define msb(n) __lg(n)
#define lsb(n) __builtin_ffs(n)
#define f first
#define s second
using namespace std;
const double PI = 2*acos(0.0);
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int tc = 1; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int>v(n) , a_v , b_v;
        for(int i = 0 ; i < n;i++){
            cin >> v[i];
        }
        stack<int> a , b;
        a.push(v[0]);
        for(int i = 1 ; i < n;i++){
            if(v[0] < v[i]){
                b.push(v[i]);
                v[i] = 0;
                break;
            }
        }
        v[0] = 0;
        int cnt = 0;
        //cout<<a.size()<<' '<<b.size()<<endl;
        if(b.size() == 0){
            for(int i = 1 ; i < n;i++){
                int at = a.top();
                if(v[i] and at <= v[i]) a.push(v[i]);
                else if(v[i]) b.push(v[i]);
            }
        }else{
            for(int i = 1 ; i < n;i++){
                int at = a.top() , bt = b.top(); 
                if(v[i] and bt >= v[i]) b.push(v[i]) , v[i] = 0;
                else if(v[i] and at > v[i]) a.push(v[i]) , v[i] = 0;
            }
            for(int i = 1 ; i < n;i++){
                if(v[i]) a.push(v[i]);
            }
        }
        //cout<<a.size()<<' '<<b.size()<<endl;
        while(!a.empty()){
            int at = a.top();
            a.pop();
            a_v.push_back(at);
        }

        while(!b.empty()){
            int bt = b.top();
            b.pop();
            b_v.push_back(bt);
        }
        for(int i = 1 ; i < b_v.size();i++){
            if(b_v[i-1] < b_v[i]) cnt++;
        }
        for(int i = 1 ; i < a_v.size();i++){
            if(a_v[i-1] < a_v[i]) cnt++;
        }
        for(auto i : b_v) cout<<i<<' ';
        //cout<<cnt<<endl;
    }
    return 0;
}