class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > table(m);
        for(int i = 0; i != m; ++i)
            table[i].resize(n);
        table[0][0] = 1;
        for(int row = 1; row != m; ++row)
            table[row][0] = 1;
        for(int col = 1; col != n; ++col)
            table[0][col] = 1;
        for(int row = 1; row != m; ++row)
            for(int col = 1; col != n; ++col)
            {
                table[row][col] = table[row - 1][col] + table[row][col - 1];
            }
        return table[m - 1][n - 1];
    }
};