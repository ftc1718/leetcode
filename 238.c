/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ret = (int*)malloc(numsSize * sizeof(int));
    int left, right;
    int i;
    left = right = 1;
    for(i = 0; i < numsSize; i++)
    {
        ret[i] = left;
        left *= nums[i];
    }
    for(i = numsSize - 1; i >= 0; i--)
    {
        ret[i] *= right;
        right *= nums[i];
    }
    *returnSize = numsSize;
    return ret;
}