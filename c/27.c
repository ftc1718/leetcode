int removeElement(int* nums, int numsSize, int val) {
    int front, rear;
    front = 0;
    rear = numsSize - 1;
    while(front <= rear){
        if(*(nums + front) == val){
            *(nums + front) = *(nums + rear);
            rear--;
        }
        else 
            front++;
    }
    return front;
}