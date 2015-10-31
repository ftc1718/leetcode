class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> nums_map;
        vector<int> ret;
        for(int i = 0; i != nums.size(); ++i)
        {
            map<int, int>::iterator it = nums_map.find(nums[i]);
            if(it != nums_map.end())
            {
                ret.push_back(it->second);
                ret.push_back(i + 1);
            }
            else
                nums_map.insert(make_pair(target - nums[i], i + 1));
        }
        return ret;
    }
};

//negetive numbers