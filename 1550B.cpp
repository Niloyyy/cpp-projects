#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--)
    {
        int n , a , b; cin >> n >> a >> b;
        string s; cin >> s;
        if(b >= 0)
        {
            cout << (a + b) * n <<endl;
        }
        else
        {
            vector<int>cnt;
            int cnt_one = 0 ,  cnt_zero = 0;
            for(int i = 0 ; i < s.size();i++)
            {
                s[i] == '1' ? cnt_one++ : cnt_zero++;
            }
            if(cnt_one > cnt_zero)
            {
              for(int j = 0 ; j < s.size() ; )
                {
                    int temp = 0;
                    if(s[j] == '0')
                    {
                        for(int cc = j ; ; cc++)
                        {
                            if(s[j] == s[cc])  temp++;
                            else break;
                        }
                    }
                    if(temp) cnt.push_back(temp);
                    temp == 0 ? j++ : j += temp;
                }  
            }
            else
            {
                for(int j = 0 ; j < s.size() ; )
                {
                    int temp = 0;
                    if(s[j] == '1')
                    {
                        for(int cc = j ; ; cc++)
                        {
                        if(s[j] == s[cc])  temp++;
                        else break;
                        }
                    }
                    if(temp) cnt.push_back(temp);
                    temp == 0 ? j++ : j += temp;
                }  
            }
            int ans = max(cnt_one , cnt_zero) * a + b;
            for(auto u : cnt) ans += a * u + b;
            cout << ans <<endl;
            //cout<<endl<<cnt_one<<" "<<cnt_zero;        
        }
    }  
    return 0;
}