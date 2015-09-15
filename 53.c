int maxSubArray(int* nums, int numsSize) {
    int maxSum, thisSum, i;

    maxSum = *nums;
    thisSum = 0;
    for(i = 0; i < numsSize; i++){
        thisSum += *(nums + i);
        if(thisSum > maxSum)
            maxSum = thisSum;
        if(thisSum < 0)
            thisSum = 0;
    }
    return maxSum;
}