/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int** columnSizes, int* returnSize) {
    int i, j;
    int **arr;
    arr = (int**)malloc(sizeof(int*) * numRows);
    *columnSizes = (int*)malloc(numRows * sizeof(int));
    for(i = 0; i < numRows; i++)
    {
        arr[i] = (int*)malloc(sizeof(int) * (i + 1));
        (*columnSizes)[i] = i + 1;
        for(j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    *returnSize = numRows;
    return arr;
}