/*  caculate how many 1 in each bit  bitcount[i]
*   then use bitcount[i] % 3 ,we can find the number
*   that is not appear 3 times
*
*
*/


int singleNumber(int* nums, int numsSize) {
    int bitcount[32] = {0};
    int i, j;
    int ret = 0;
    for(i = 0; i < numsSize; i++)
    {
        for(j = 0; j < 32; j++)
        {
            if((1 << j) & nums[i])
                bitcount[j]++;            //count the 1s in each bit
        }
    }
    for(i = 0; i < 32; i++)
    {
        ret += (bitcount[i] % 3) << i;
    }
    return ret;
}