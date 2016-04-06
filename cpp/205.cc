class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash_s[256] = {0}, hash_t[256] = {0};
        for(size_t i = 0; i != s.size(); ++i){
            if(hash_s[s[i]] == 0 && hash_t[t[i]] == 0){
                hash_s[s[i]] = t[i];
                hash_t[t[i]] = s[i];
            }
            else{
                if(hash_s[s[i]] != t[i]|| hash_t[t[i]] != s[i]) return false;
            }
            
        }
        return true;
    }
};