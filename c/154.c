/*
xi is the mininum in array
xk, xm in array, k < m
if xk < xm  i must not in k < i <= m
else if xk > xm i must in k < i <= m ( because the order in this section is rotate)
*/

int findMin(int* nums, int numsSize) {
    int mid, low, high, tmp;
    low = 0;
    high = numsSize - 1;
    
    while(low <= high)
    {
        mid = (high + low) / 2;
        if(nums[mid] == nums[high])
            high--;         //eliminate the same number
        else if(nums[mid] < nums[high])
            high = mid;
        else
            low = mid + 1;
        
    }
    return nums[low];
}