int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    while(i < numsSize && *(nums + i) < target)
    {
        i++;
    }
    if(i == numsSize)
        return i;
    else
        return i--;
}