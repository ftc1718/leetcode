class Solution {//time limit exceed
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        string::iterator begin, end, iter;
        begin = s.begin();
        end = iter = begin + 1;
        int len, max;
        len = max = 1;
        while(iter != s.end())
        {
            string::iterator it = find(begin, end, *iter);
            if(it != end)
            {
                if(len > max)
                {
                    max = len;
                }
                //this while decrease time limit
                while(end != s.end() && *end == *it)
                {
                    ++end;
                    ++it;
                }
                begin = it;
                end = begin + 1;
                len = 1;
            }
            else
            {
                ++end;
                ++len;
            }
            iter = end;
        }
        return max > len ? max : len;
    }
};