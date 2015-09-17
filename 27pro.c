int removeElement(int* nums, int numsSize, int val) {
    int i, cur;
    for(cur = 0, i = 0; i < numsSize;){
        if(*(nums + i) != val){
            *(nums + cur) = *(nums + i);
            cur++;
        }
        i++;
    }
    return cur;
}