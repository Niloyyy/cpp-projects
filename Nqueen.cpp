#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Solution {
  public:
    bool is_safe(int row, int col, vector < string > board, int n) {
      // check upper element
      int duplicate_row = row;
      int duplicate_col = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = duplicate_col;
      row = duplicate_row;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duplicate_row;
      col = duplicate_col;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }

  public:
    void solve(int col, vector < string > & board, vector < vector < string >> & ans, int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (is_safe(row, col, board, n)) {
          board[row][col] = 'Q';
          solve(col + 1, board, ans, n);
          board[row][col] = '#';
        }
      }
    }

  public:
    vector < vector < string >> solve_N_queen(int n) {
      vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '#');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      solve(0, board, ans, n);
      return ans;
    }
};

int main() {
  int n; cin >> n;
  Solution obj;
  vector < vector < string >> ans = obj.solve_N_queen(n);

  for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}