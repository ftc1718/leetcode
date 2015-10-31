class Solution {
public:
    bool isValid(string s) {
        for(int i = 0; i != s.size(); ++i)
        {
            switch(s[i])
            {
                case '(': ss.push(s[i]); break;
                case '[': ss.push(s[i]); break;
                case '{': ss.push(s[i]); break;
                case ')': if(ss.empty() || ss.top() != '(') return false;
                          else ss.pop(); break;
                case ']': if(ss.empty() || ss.top() != '[') return false;
                          else ss.pop(); break;
                case '}': if(ss.empty() || ss.top() != '{') return false;
                          else ss.pop(); break;
                default: cout << "in default" << endl; break;
            }
        }
        if(!ss.empty())
            return false;
        return true;
    }
private:
    stack<char> ss;
};