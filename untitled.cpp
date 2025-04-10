#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

bool valid(char open , char close){
    if(open == '(') return close == ')';
    else if(open == '{') return close == '}';
    else return close == ']';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--)
    {
        string s ; cin >> s;
        stack<char>stac;
        bool ok = false;
        for(auto ch : s)
        {
            if(ch == '(' or ch == '{' or ch == '[')
            {
              stac.push(ch);  
            }
            else
            {
                if(stac.empty()) {
                    //cout <<"NO\n";
                    ok = false;
                    break;
                }
                else
                {
                    char tp = stac.top();
                    if(!valid(tp , ch))
                    {
                        ok = false;
                        break;
                    }
                    else
                    {
                        stac.pop();
                        ok = true;
                    }
                }
            }
        }
        if(ok and stac.empty()) cout <<"YES\n";
        else cout <<"NO\n";   
    }	
    
    return 0;
}