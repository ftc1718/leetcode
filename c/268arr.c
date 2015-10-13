int missingNumber(int* nums, int numsSize) {
    int *arr = (int*)calloc(numsSize, sizeof(int));
    int i;
    for(i = 0; i < numsSize; i++)
        arr[nums[i]] = 1;
    for(i = 0; i < numsSize; i++)
        if(arr[i] == 0)
            break;
    return i;
}