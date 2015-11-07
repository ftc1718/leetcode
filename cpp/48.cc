class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> tmp(matrix);
        for(vector<int>::size_type row = 0; row != matrix.size(); ++row)
        {
            for(vector<int>::size_type col = 0; col != matrix[0].size(); ++col)
            {
                matrix[col][matrix[row].size() - 1 - row] = tmp[row][col];
            }
        }
    }
};