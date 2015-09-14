int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int majorityElement(int* nums, int numsSize) {
    
    /* the number in middle is the answer */
    qsort(nums, numsSize, sizeof(int), cmp);
    if(numsSize % 2 == 0)
        return *(nums + numsSize / 2 - 1);
    else
        return *(nums + numsSize / 2);
    
}