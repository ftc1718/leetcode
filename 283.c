void moveZeroes(int* nums, int numsSize) {
    int i, j;
    for(i = 0, j = 0; i < numsSize; i++)
    {
        while(nums[i] == 0)
            i++;
        if(i < numsSize)
        {
            nums[j] = nums[i];
            j++;
            
        }
    }
    for(;j < numsSize; j++)
    {
        nums[j] = 0;
    }
}