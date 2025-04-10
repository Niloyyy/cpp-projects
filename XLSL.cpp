#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--){
        int x , y , z , a , b , c; cin >> x >> y >> z >> a >> b >> c;
        int ans = 0 , exc = 0 , exb = 0;
        if(c <= z){
            ans += c;
            exc = z - c;
        }else{
            ans += min(c , z);
        }

        if(b <= y){
            ans += b;
            exb = y - b;
        }else{
            ans += min(b , y + exc);
            exc -= min(b , y + exc) - y;
        }
        
        if(a <= x){
            ans += a;
        }else{
            ans += min(a , x + exb + exc);
        }
        cout<<ans<<endl;
        
    }

}
