class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        for(vector<string>::iterator it = tokens.begin(); it != tokens.end(); ++it)
        {
            if(*it == "+")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b + a);
            }
            else if(*it == "-")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b - a);
            }
            else if(*it == "*")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b * a);
            }
            else if(*it == "/")
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                s.push(b / a);
            }
            else
            {
                s.push(stoi(*it));
            }
        }
        return s.top();
    }
private:
    stack<int> s;
};