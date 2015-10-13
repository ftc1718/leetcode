/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 * 
 * 
 * Once again, we need to use XOR to solve this problem. But this time, we need to do it in two passes:

    In the first pass, we XOR all elements in the array, and get the XOR of the two numbers we need to find. Note that since the two numbers are distinct, so there must be a set bit (that is, the bit with value '1') in the XOR result. Find out an arbitrary set bit (for example, the rightmost set bit).

    In the second pass, we divide all numbers into two groups, one with the aforementioned bit set, another with the aforementinoed bit unset. Two different numbers we need to find must fall into thte two distrinct groups. XOR numbers in each group, we can find a number in either group.

Complexity:

    Time: O (n)

    Space: O (1)

A Corner Case:

    When diff == numeric_limits<int>::min(), -diff is also numeric_limits<int>::min(). Therefore, the value of diff after executing diff &= -diff is still numeric_limits<int>::min(). The answer is still correct.

 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int i;
    int xory = 0;
    int *ret = (int*)calloc(2, sizeof(int));
//    int ret[2] = {0};  is not correct
    for(i = 0; i < numsSize; i++)
        xory ^= nums[i];
    xory &= -xory;  // find the setbit
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] & xory)
            ret[0] ^= nums[i];
        else
            ret[1] ^= nums[i];
    }
//    printf("%d\n%d\n", ret[0], ret[1]);
    *returnSize = 2;
    return ret;
}