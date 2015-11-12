class Solution {
public:
    void reverseWords(string &s) {
        istringstream stream(s);
        s.clear();
        string tmp;
        while(stream >> tmp)
            s.insert(0, tmp + " ");
        if(!s.empty())
            s.erase(s.size() - 1, 1);
    }
};