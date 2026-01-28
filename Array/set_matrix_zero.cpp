// in this question we have to set the row and col zero which include zero 
// if zero is ar [0][0] the nwe have to make all members of col[0] and row[0] to zero 
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0); // create vector of size n, initialized to 0
        vector<int> col(m, 0); // create vector of size m, initialized to 0

        // Step 1: Find the zero elements and mark their row and column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Step 2: Set elements to zero based on row and col markers
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}

*/