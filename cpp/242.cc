class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(26, 0);
        for(int i = 0; i != s.size(); ++i){
            ++hash[s[i] - 'a'];
        }
        for(int i = 0; i != t.size(); ++i){
            if(hash[t[i] - 'a'] == 0) return false;
            --hash[t[i] - 'a'];
        }
        for(int i = 0; i != hash.size(); ++i){
            if(hash[i]) return false;
        }
        return true;
    }
};