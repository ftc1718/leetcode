class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0"){
            return "0";
        }
       vector<int> vec(num1.size() + num2.size(), 0);
       
       for(int i = 0; i != num1.size(); ++i){
           for(int j = 0; j != num2.size(); ++j){
               vec[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
           }
       }
       
       
       for(int i = vec.size() - 1; i >= 0; --i){
           if(vec[i] >= 10){
               vec[i - 1] += vec[i] / 10;
               vec[i] = vec[i] % 10;
           }
       }
       
       string ret;
       int i = 0;
       if(vec[i] == 0){
           ++i;
       }
       for(; i != vec.size(); ++i){
           ret.push_back(vec[i] + '0');
       }
       return ret;
    }
};