class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int len = count(str.begin(), str.end(), ' ') + 1;
        if(pattern.size() != len)
            return false;
        set<char> pattern_set;
        set<string> str_set;
        for(string::iterator siter = pattern.begin();
        siter != pattern.end(); ++siter)
            pattern_set.insert(*siter);
        string word;
        istringstream stream(str);
        while(stream >> word)
            str_set.insert(word);
        return str_set.size() == pattern_set.size();
        }
};