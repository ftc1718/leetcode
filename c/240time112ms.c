bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int row = 0, col = matrixColSize - 1;
    while(row < matrixRowSize && col >= 0)
    {
        if(matrix[row][col] == target)
            return true;
        if(matrix[row][col] < target)
            row++;
        else
            col--;
    }
    return false;
}