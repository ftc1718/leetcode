bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int i;
    for(i = 0; i < matrixRowSize; i++)
    {
        int low = 0, high = matrixColSize - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            if(matrix[i][mid] < target)
                low = mid + 1;
            else if(matrix[i][mid] > target)
                high = mid - 1;
            else
                return true;
        }
    }
    return false;
}