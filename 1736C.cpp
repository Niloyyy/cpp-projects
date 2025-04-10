#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int dx[] = {1 , 0 , -1 , 0};
int dy[] = {0 , -1 , 0 , 1};


void swap(char* x, char* y) { 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 

void permute(char* a, int l, int r) { 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
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
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int l = 1 , r = 1;
        int ans = 0;
        bool ok = true;
        for(int i = 1 ; i <= n;i++){
            int x; cin >> x;
            if(x >= r){
                r++;
            }else if(r > x){
                //cout << l <<" "<<r<<endl;
                ans += (r-l+1) * (r-l+2) / 2;
                ok = false;
                l = r = 1;
            }
            //ans += (r-l+1) * (r-l+2) / 2;
        }
        ok ? ans += (r-l+1) * (r-l) / 2 : ans += (r-l+1) * (r-l+2) / 2;
        cout << ans<<endl;
    }

    
    return 0;
}

// 2 3 5 4 2 3
// 1 2 3 4 5 6


// C program to print all permutations with duplicates 
// allowed 
#include <stdio.h> 
#include <string.h> 

/* Function to swap values at two pointers */
void swap(char* x, char* y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(char* a, int l, int r) 
{ 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
    else { 
        for (i = l; i <= r; i++) { 
            swap((a + l), (a + i)); 
            permute(a, l + 1, r); 
            swap((a + l), (a + i)); // backtrack 
        } 
    } 
} 

/* Driver code */
int main() 
{ 
    char str[] = "ABC"; 
    int n = strlen(str); 
    permute(str, 0, n - 1); 
    return 0; 
}
