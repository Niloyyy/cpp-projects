#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define ll long long int
#define ull unsigned long long
#define endl '\n'
#define eps 1e-9
#define LR(j , n) for(int i = j ; i <= n;i++)
#define RL(n , j) for(int i = n ; i >= j ;i--)
#define msb(n) __lg(n)
#define gcd(a , b) __gcd(a , b)
#define lcm(a , b) a * b / __gcd(a , b)
using namespace std;
const int mod = 1e9 + 7;
int dr[] = {+1 , +0 , -1 , +0};
int dc[] = {+0 , -1 , +0 , +1};
const int MAX = 1e6+9;
bool vis[MAX] = {false};
int level[MAX] = {0};

int read(){
	char k = getchar(); int x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m ; cin >> n >> m;
    queue<int>q;
    q.push(n);
    while(!q.empty()){
    	int p = q.front();
    	q.pop();
    	vis[p] = true;
    	int child_1  = p << 1 , child_2 = p - 1;
    	//cerr<<child_1<<' '<<child_2<<endl;
    	if(child_1 and child_1 <= MAX and !vis[child_1]) {
    		q.push(child_1);
    		level[child_1] = level[p] + 1;
    		vis[child_1] = true;
    	}
    	if(child_2 and  child_2  <= MAX and !vis[child_2]){
    		 q.push(child_2);
    		 level[child_2] = level[p] + 1;
    		 vis[child_2] = true;
    	}
    	if(child_1 == m or child_2 == m ) break;
    }
    cout<<level[m];
    //for(int i = 0 ;i < 10;i++) cout<<vis[i]<<' ';

    return 0;
}