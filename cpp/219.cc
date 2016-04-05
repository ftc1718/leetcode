class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m; // m[i] == 0
        for(int i = 0; i != nums.size(); ++i){
            if(m[nums[i]] != 0 && i - m[nums[i]] < k) return true;
            else m[nums[i]] = i + 1;
        }
        return false;
    }
};// 77ms




class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        if(k <= 0) return false;
        int min = INT_MAX, max = INT_MIN;
        for(int i = 0; i != nums.size(); ++i){
            if(nums[i] > max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }
        vector<int> hash(max - min + 1, -1);
        
        for(int i = 0; i != nums.size(); ++i){
            if(hash[nums[i] - min] != -1 && i - hash[nums[i] - min] <= k) return true;
            else hash[nums[i] - min] = i;
        }
        return false;
    }
};//  12ms