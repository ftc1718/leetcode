class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        vector<int> vec;
        for(int i = 0; i != numRows; ++i){
            vec.push_back(1);
            for(int j = i - 1; j > 0; --j){
                vec[j] += vec[j - 1];
            }
            ret.push_back(vec);
        }
        return ret;
    }
};