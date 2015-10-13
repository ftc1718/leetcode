//similar as linked list cycle II
int findDuplicate(int* nums, int numsSize) {
    int fast, slow;
    slow = nums[0];
    fast = nums[nums[0]];
    while(slow != fast)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    fast = 0;
    while(slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}