class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp(nums);
        for(int ix = 0; ix != tmp.size(); ++ix)
        {
            nums[(ix + k) % tmp.size()] = tmp[ix];
        }
    }
};