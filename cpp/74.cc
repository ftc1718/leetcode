class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<vector<int>>::iterator veciter = matrix.begin();
        vector<int>::iterator iter = veciter->begin();
        if(*iter > target)
            return false;
        for(; veciter != matrix.end(); ++veciter)
        {
            if(veciter->at(0) > target)
                break;
            else if(veciter->at(0) == target)
                return true;
            else
                continue;
        }
        --veciter;
        vector<int>::iterator 
        result = find(veciter->begin(), veciter->end(), target);
        if(result != veciter->end())
            return true;
        else
            return false;
    }
};