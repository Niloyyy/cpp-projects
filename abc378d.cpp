#include <iostream>
#include <vector>
#include <set>

using namespace std;

int H, W, K;
vector<vector<char>> grid; // The grid
int totalPaths = 0;

// Directions for moving in the grid: up, down, left, right
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

// Helper function to check if a cell is valid
bool isValid(int x, int y, set<pair<int, int>>& visited) {
    return x >= 0 && x < H && y >= 0 && y < W && grid[x][y] == '.' && visited.find({x, y}) == visited.end();
}

// Recursive backtracking function
void backtrack(int x, int y, int steps, set<pair<int, int>>& visited) {
    // Base case: if the path length is K+1, count it as a valid path
    if (steps == K + 1) {
        totalPaths++;
        return;
    }

    // Explore all valid adjacent cells
    for (auto it : directions) {
        int nx = x + it.first, ny = y + it.second;
        if (isValid(nx, ny, visited)) {
            visited.insert({nx, ny}); // Mark the cell as visited
            backtrack(nx, ny, steps + 1, visited); // Recursive call
            visited.erase({nx, ny}); // Backtrack
        }
    }
}

int main() {
    // Input grid dimensions and moves
    cin >> H >> W >> K;
    grid.resize(H, vector<char>(W));

    // Input the grid
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    // Start from all empty cells
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                set<pair<int, int>> visited;
                visited.insert({i, j});
                backtrack(i, j, 1, visited);
            }
        }
    }

    // Output the total number of paths
    cout << totalPaths << endl;
    return 0;
}
