#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , 1};
#define MAXN 1001
int spf[MAXN];
const int MAX = 1e3+9;
bool vis[MAX];
int level[MAX];

void sieve(){
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
set<int> get_factorization(int x){
    set<int> ret;
    while (x != 1) {
        ret.insert(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

void reset(){
    for(int i = 0 ; i < MAX ;i++){
        vis[i] = false;
        level[i] = 0;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1; cin >> tc;
    sieve();
    for(int i = 1 ; i <= tc;i++){
        reset(); 
        int s , t; cin >> s >> t;
        queue<int>q;
        q.push(s);
        while(!q.empty()){
            int p = q.front();
            q.pop();
            vis[p] = true;
            set<int> primes = get_factorization(p);
            for(auto prime : primes){
                if(prime + p <= t and prime != p and !vis[prime+p]){
                    q.push(prime+p);
                    level[prime+p] = level[p] + 1;
                    vis[prime+p] = true;
                }else{
                    break;
                }
            }

        }
        if(s == t ) printf("Case %d: %d\n" , i , 0);
        else if((!level[t] and !vis[t]) or s > t) printf("Case %d: %d\n" , i , -1);
        else printf("Case %d: %d\n" , i , level[t]);   

    }

    return 0;
}