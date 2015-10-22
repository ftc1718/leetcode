class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> vec{0};
        int b = 1;
        for(int i = 0; i != n; ++i)
        {
            for(int j = vec.size() - 1; j >= 0; --j)
            {
                int tmp = vec[j] | b;
                vec.push_back(tmp);
            }
            b <<= 1;
        }
        return vec;
    }
};