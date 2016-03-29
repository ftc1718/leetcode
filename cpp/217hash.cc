class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hash;
        for(int i = 0; i != nums.size(); ++i){
            if(hash.find(nums[i]) != hash.end()){
                return true;
            }
            hash.insert(nums[i]);
        }
        return false;
    }
};//96ms




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hash;
        for(int i = 0; i != nums.size(); ++i){
            hash.insert(nums[i]);
        }
        return hash.size() != nums.size();
    }
};//84ms




class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> hash(nums.begin(), nums.end());
        return hash.size() != nums.size();
    }
};//48ms