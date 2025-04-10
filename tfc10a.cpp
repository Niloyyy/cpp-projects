#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dr[] = {+1 , 0 , -1 , 0};
int dc[] = {0 , -1 , 0 , +1};
vector<string>ss;

void swap(char* x, char* y) { 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void permute(char* a, int l, int r) { 
    int i; 
    if (l == r) 
        //printf("%s\n", a);
        ss.push_back(a); 
    else { 
        for (i = l; i <= r; i++) { 
            swap((a + l), (a + i)); 
            permute(a, l + 1, r); 
            swap((a + l), (a + i)); 
        } 
    } 
} 


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[9]; cin >>s; 
    int k; cin >> k;
    permute(s , 0 , strlen(s)-1);
    set<string>st; 
    for(auto c : ss) st.insert(c);
   
    ss.clear();
    for(auto it : st){
    	ss.push_back(it);
    }
    cout<<ss[k-1];	
    return 0;
}