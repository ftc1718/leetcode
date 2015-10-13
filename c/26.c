int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    if(numsSize == 0)
        return 0;
    for(i = 0, j = 1; j < numsSize;)
        if(nums[i] == nums[j])
            j++;
        else
            nums[++i] = nums[j++];
    return i + 1;
}