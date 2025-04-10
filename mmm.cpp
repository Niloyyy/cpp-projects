class Solution {    
public:     
void permutation(string &s , int l , int r){
    if(l == r) //se.insert(s);
    else{
        for(int i = l ; i <= r ;i++){
            swap(s[i] , s[l]);
            permutation(s , l+1 , r);
            swap(s[i] , s[l]);
        }
    }
}    
public:
    set<string>se;
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size();
        string s = "";
        for(int i = 1 ; i < n;i++) s += 'R';
        for(int i = 1 ; i < m;i++) s += 'D';
        permutation(s , 0 , m + n - 2);
        // int mn = INT_MAX;
        // for(auto set : se){
        //     int sum = 0;
        //     int i = 0 , j = 0 , k = 0;
        //     while(i < m and j < n and k < set.size()){
        //         sum += grid[i][j];
        //         if(set[k] == 'D') i++;
        //         else j++;
        //         k++;
        //     }
        //     sum += grid[i][j];
        //     mn > sum ? mn = sum : mn = mn;
        // } 
    } 
    return 1;     
};