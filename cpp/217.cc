class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>::iterator end_unique =
            unique(nums.begin(), nums.end());
        if(end_unique == nums.end())
            return false;
        else
            return true;
    }
};