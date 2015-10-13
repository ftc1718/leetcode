/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //use array simulate carry-over
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = 0;
    for(i = digitsSize - 1; i >= 0; i--)
    {
        *(digits + i) += 1;
        if(*(digits + i) > 9)
        {
            *(digits + i) %= 10;
        }
        else break;
    }
    
    if(i == -1)
    {
        digitsSize++;
        digits = (int*)realloc(digits, digitsSize * sizeof(int));
        for(i = digitsSize - 2; i >= 0; i--)
            *(digits + i + 1) = *(digits + i);
        *digits = 1;
    }
    *returnSize = digitsSize;
    return digits;
}