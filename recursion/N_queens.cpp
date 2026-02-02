// in this question we have to find the positions of queens to place in the n*n chess borad such that 
// each row have 1 queen 
// each column have 2 queen 
// no any queen attack each other 
/*
class Solution {
public:
    bool issafe(int row, int col, vector<string> &board, int n) {
        int duprow = row, dupcol = col;

        // Check upper diagonal 
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        // Check left row
        row = duprow;
        col = dupcol;
        while (col >= 0) {
            if (board[row][col] == 'Q') return false;
            col--;
        }

        // Check lower diagonal
        row = duprow;
        col = dupcol;
        while (row < n && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        return true;
    }

    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (issafe(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
                board[row][col] = '.'; // Backtracking
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.')); // Initialize board with '.'
        solve(0, board, ans, n);
        return ans;
    }
};

*/

// solution by shraddha khapara 
/*
class Solution {
    bool issafe(vector<string> &board, int row, int col, int n) { // O(n)
        // horizontal
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }
        // vertical
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }
        // left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nqueens(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
        if (row == n) {
            ans.push_back(board);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (issafe(board, row, j, n)) {
                board[row][j] = 'Q';
                nqueens(board, row + 1, n, ans);
                board[row][j] = '.'; // backtrack
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));  // initialize board
        vector<vector<string>> ans;

        nqueens(board, 0, n, ans);
        return ans;
    }
};

*/