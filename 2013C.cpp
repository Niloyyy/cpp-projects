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

void result(string s){
    cout << "! " << s << endl;
    cout << flush;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); 
    cout.tie(NULL);

    int tc = 1; 
    cin >> tc;
    
    while(tc--){
        int n; 
        cin >> n;
        string t = "0"; 
        bool found_answer = false; 
        bool d = false, ff = true;

        for(int i = 0; i < 2 * n; i++){
            cout << "? " << t << endl;
            cout << flush;
            
            int response;
            cin >> response; 

            if(response == 1 && t.size() == n){
                result(t); 
                found_answer = true;
                break;
            }

            if(d){
                if(response == 1){
                    t = "0" + t;
                } else {
                    t.erase(0, 1);
                    t = "1" + t;
                }
                continue;
            }

            if(!ff && response == 0){
                t.pop_back();
                d = true;
                t = "0" + t;
                continue;
            }

            if(response == 1){
                t += "0";
                ff = true;
            } else {
                t.pop_back();
                t += "1";
                ff = false;
            }
        }

        if (!found_answer) {
            result(t);
        }
    }

    return 0;
}
