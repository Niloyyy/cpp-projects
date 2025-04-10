#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define eps 1e-9
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector< pair<int , int> >p;
    for(int i = 0 ; i < n;i++){
    	int x , y; cin >> x >> y;
    	p.push_back({x , y});
    }
    set<long double>dist;
    for(int i = 0 ; i < n-1;i++){
    	int x1 = p[i].first;
    	int y1 = p[i].second;
    	for(int j = i+1 ; j < n;j++){
    		int x2 = p[j].first;
    		int y2 = p[j].second;
    		dist.insert((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    	}
    }
    //sort(dist.begin() , dist.end());
    auto it = dist.begin();
    printf("%.14Lf\n", sqrt(*it));
    //for(auto it : dist) cout<<it<<" ";


    return 0;
}