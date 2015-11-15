bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int i;
    for(i = 0; i < matrixRowSize; i++)
    {
        if(matrix[i][0] <= target && matrix[i][matrixColSize - 1] >= target)
        {
            int low = 0, high = matrixColSize - 1;
            while(low <= high)
            {
                int mid = (high + low) / 2;
                if(matrix[i][mid] < target)
                    low = mid + 1;
                else if(matrix[i][mid] > target)
                    high = mid - 1;
                else
                    return true;
            }
        }
    }
    return false;
}