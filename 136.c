int singleNumber(int* nums, int numsSize) {
    int ans = 0;
    while(numsSize != 0){
        ans ^= *(nums + numsSize - 1);
        --numsSize;
    }
    return ans;
}
