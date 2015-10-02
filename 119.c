/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int i, j, k;
    int *arr;
    arr = (int*)malloc(sizeof(int) * (rowIndex) + 1);
    for(i = 0; i <= rowIndex; i++)
    {
        arr[i] = 1;
        j = i - 1;
        for(k = j; k > 0; k--)
            arr[k] = arr[k - 1] + arr[k];
    }
    *returnSize = rowIndex + 1;
    return arr;
}
// Introduction to the Design and Analysis of Algorithms page.214
// and page.21 chapter8.1 