int missingNumber(int* nums, int numsSize) {
    int i, sum = 0;
    int ret;
    ret = numsSize * (1 + numsSize) / 2;
    for(i = 0; i < numsSize; i++)
        sum += nums[i];
    return ret - sum;
}