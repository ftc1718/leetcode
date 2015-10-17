int findPeakElement(int* nums, int numsSize) {
    int i;
    for(i = 0; i < numsSize - 1; i++)
        if(nums[i] > nums[i + 1])
            break;
    return i;
}