/* 
* 出现超过n/2的数比其他数出现次数的总和还要多
*/
int majorityElement(int* nums, int numsSize) {
    int curnum = 0, appear = 0;
    int i;
    for(i = 0; i < numsSize; i++){
        if(appear == 0){
            curnum = nums[i];
            appear++;
        }
        else{
            if(curnum == nums[i]){
                appear++;
            }
            else{
                appear--;
            }
        }
    }
    return curnum;
}