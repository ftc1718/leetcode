int maxSubArray(int* nums, int numsSize) {// [-1] >> -1 not [-1] >> 0
    int maxSum, thisSum, i;

    maxSum = *nums; //maxSum = 0;
    thisSum = 0;
    for(i = 0; i < numsSize; i++){
        thisSum += *(nums + i);
        if(thisSum > maxSum)
            maxSum = thisSum;
        if(thisSum < 0) // [-3,-2,0,-1]
            thisSum = 0;
    }
    return maxSum;
}