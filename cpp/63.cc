class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.front().front() == 1)
            return 0;
        obstacleGrid.front().front() = 1;
        for(int i = 1; i != obstacleGrid.size();)
        {
            if(obstacleGrid[i][0] == 1)
            {
                for(; i != obstacleGrid.size(); ++i)
                    obstacleGrid[i][0] = 0;
            }
            else
            {
                obstacleGrid[i][0] = 1;
                ++i;
            }
        }
        for(int j = 1; j != obstacleGrid[0].size();)
        {
            if(obstacleGrid[0][j] == 1)
            {
                for(; j != obstacleGrid[0].size(); ++j)
                    obstacleGrid[0][j] = 0;
            }
            else
            {
                obstacleGrid[0][j] = 1;
                ++j;
            }
        }
        for(int i = 1; i != obstacleGrid.size(); ++i)
            for(int j = 1; j != obstacleGrid[i].size(); ++j)
            {
                if(obstacleGrid[i][j] == 1)
                    obstacleGrid[i][j] = 0;
                else
                    obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
            }
        return obstacleGrid.back().back();
    }
};