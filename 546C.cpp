#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; //cin >> tc;
    while(tc--){
    	int n; cin >> n;
        deque<int>a;
        deque<int>b;
        int ans;
        int first; cin >> first;
        for(int i = 0 ; i < first;i++){
        	int x; cin >> x;
        	a.push_back(x);
        	if(x==n) ans = 1;
        }
        int sc; cin >> sc;
        for(int i = 0 ; i < sc;i++){
        	int x; cin >> x;
        	b.push_back(x);
        	if(x==n) ans = 2;
        }
        int step = 110;
        // cout<<a.front();
        // cout<<a.back();
        while(step--){
        	if(a.empty()){
        		ans = 2;
                break;
        	}
            if(b.empty()){
                ans = 1;
                break;
            }
        	int af = a.front();
        	int bf = b.front();
        	a.pop_front();
        	b.pop_front();
        	if(af > bf){
        		a.push_back(bf);
        		a.push_back(af);
        	}else{
                b.push_back(af);
                b.push_back(bf);
            }
        }
        if(step<=0) cout << -1;
        else cout << 110-step-1<<" "<<ans;
        //cout << a.back();



        
    }
    return 0;
}