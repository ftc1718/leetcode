class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec(nums1);
        for(vector<int>::iterator iter2 = nums2.begin();
            iter2 != nums2.end(); ++iter2)
            vec.push_back(*iter2);
        sort(vec.begin(), vec.end());
        if(vec.size() % 2 == 0)
            return ((vec.at(vec.size() / 2 - 1) + vec.at(vec.size() / 2)) / 2.0);
        else
            return vec.at(vec.size() / 2);
    }
};