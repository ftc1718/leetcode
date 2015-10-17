int max(int a, int b)
{
    return a > b ? a : b;
}

int rob(int* nums, int numsSize) {
    int i, rob_cur, nonrob_cur;
    int ret = 0;
    rob_cur = nonrob_cur = 0;
    for(i = 0; i < numsSize; i++)
    {
        ret = max(rob_cur + nums[i], nonrob_cur);
        rob_cur = nonrob_cur;
        nonrob_cur = ret;
    }
    return ret;
}