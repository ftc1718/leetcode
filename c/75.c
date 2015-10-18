void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortColors(int* nums, int numsSize) {
    int i, p, r;
    i = p = 0;
    r = numsSize - 1;
    while(i <= r)
    {
        switch(nums[i])
        {
            case 0:
            {
                swap(&nums[i], &nums[p]);
                i++;
                p++;
                break;
            }
            case 1:
            {
                swap(&nums[i], &nums[p]);
                i++;
                break;
            }
            case 2:
            {
                swap(&nums[i], &nums[r]);
                r--;
                break;
            }
        }
    }
    return nums;
}