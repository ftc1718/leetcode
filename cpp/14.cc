class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        for(int col = 0; strs.size() > 0; ++col)
        {
            for(int row = 0; row != strs.size(); ++row)
            {
                if(col >= strs[row].size() || (row > 0 && strs[row][col] != strs[row - 1][col]))
                {
                    return prefix;
                }
            }
            prefix += strs[0][col];
        }
        return prefix;
    }
};